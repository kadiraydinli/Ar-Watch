// KADİR AYDINLI
// 02.01.2018 14:06 Salı
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "bitmap.h"

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

int hour = 17, minute = 46, second = 0, day = 31, dayW = 6, month = 12, year = 2017;
bool liveB = false; //Saat ortasındaki ':' karakterinin yanıp sönmesi için
String date, incomingData;
const char* week [] = { "Pazar", "Pazartesi", "Sali", "Carsamba", "Persembe", "Cuma", "Cumartesi" };
const byte* monthD [] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
unsigned long before = 0, current; // Önceki değer - Şimdiki değer
bool isItTime = false;

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  Wire.begin();
  Serial.begin(9600);
  display.clearDisplay();
  display.drawBitmap(0, 0, splashLogo, 128, 64, WHITE);
  display.display();
  delay(2000);
}

void loop() {
  boolean haveData = false;
  haveData = bluetoothDataControl();
  if (isItTime == true)
  {
    current = millis();
    timeDateScreen(current);
  }
  else
  {
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setCursor(5, 25);
    display.setTextSize(1);
    display.print("Telefon Ile Baglanti        Kurun!");
    display.display();
  }
}

void timeRegulation()
{
  display.display();
  delay(5000);
  if (second == 59) second = 4;
  if (second == 58) second = 3;
  if (second == 57) second = 2;
  if (second == 56) second = 1;
  if (second == 55) second = 0;
}

void screenWrite(String data)
{
  display.clearDisplay();
  display.setTextColor(WHITE);
  if (data.substring(0, 1) == "0") //Saat
  {
    hour = data.substring(2, 5).toInt();
    minute = data.substring(5, 8).toInt();
    second = 2 + data.substring(8, 10).toInt();
    day = data.substring(11, 13).toInt();
    month = data.substring(14, 16).toInt();
    year = data.substring(17, 21).toInt();
    dayW = data.substring(22, 24).toInt() - 1;
    isItTime = true;
  }

  if (data.substring(0, 1) == "1") //SMS
  {
    display.drawBitmap(0, 0, SMS, 24, 24, WHITE);
    display.setTextColor(WHITE);
    display.setTextSize(2);
    display.setCursor(35, 5);
    display.println(data.substring(data.indexOf("<no>") + 4, data.indexOf("</no>")));
    display.setTextSize(1);
    display.setCursor(0, 30);
    display.println(data.substring(data.indexOf("<msg>") + 5, data.indexOf("</msg>")));
    timeRegulation();
  }

  /*if(data.substring(0,1) == "2") //Pil Durumu
    {
    display.drawBitmap(0, 0, phoneLowBattery, 128, 60, WHITE);
    display.display();
    }*/

  if (data.substring(0, 1) == "3") //Çağrı Bilgisi
  {
    display.clearDisplay();
    display.drawBitmap(0, 0, call, 48, 48, WHITE);
    display.setTextColor(WHITE);
    display.setTextSize(2);
    display.setCursor(60, 20);
    display.println(data.substring(data.indexOf("<no>") + 4, data.indexOf("</no>")));
    display.display();
    timeRegulation();
  }
}

boolean bluetoothDataControl()
{
  int isTransactionEnded = false;
  while (!isTransactionEnded)
  {
    if (Serial.available())
    {
      incomingData = Serial.readString();
      screenWrite(incomingData);
    }
    else isTransactionEnded = true;
  }
  return true;
}

void reelTime()
{
  second++;
  if (second > 59) //second
  {
    second = 0;
    minute++;
    if (minute > 59) //minute
    {
      minute = 0;
      hour++;
      if (hour == 24) //hour
      {
        hour = 0;
        dayW++;
        day++;
        if (dayW == 8) dayW = 1;
        if (day > monthD[byte(month)])
        {
          month++;
          day = 1;
          if (month > 12)
          {
            month = 1;
            year++;
          }
        }
      } //hour
    } //minute
  } //second
}

void timeDateScreen(unsigned long current)
{
  if (current - before > 1000)
  {
    display.clearDisplay();
    display.setTextColor(WHITE);
    if (hour < 10)
    {
      display.setCursor(21, 20);
      display.setTextSize(3);
      display.print("0" + String(hour));
    }
    else
    {
      display.setCursor(21, 20);
      display.setTextSize(3);
      display.print(String(hour));
    }
    if (minute < 10)
    {
      display.setCursor(56, 20);
      display.setTextSize(3);
      if (liveB == false)
      {
        display.print(":0" + String(minute));
        liveB = true;
      }
      else
      {
        display.print(" 0" + String(minute));
        liveB = false;
      }
    }
    else
    {
      display.setCursor(56, 20);
      display.setTextSize(3);
      if (liveB == false)
      {
        display.print(":" + String(minute));
        liveB = true;
      }
      else
      {
        display.print(" " + String(minute));
        liveB = false;
      }
    }
    /*if(second < 10)
      {
      display.setCursor(0,0);
      display.setTextSize(1);
      display.print("0" + String(second));
      }
      else
      {
      display.setCursor(0,0);
      display.setTextSize(1);
      display.print(String(second));
      }*/
    display.setTextSize(1);
    display.setTextColor(WHITE);
    if (day < 10)
      date = "0" + String(day) + "." + String(month) + "." + String(year) + " " + String(week[dayW]);
    if (month < 10)
      date = String(day) + ".0" + String(month) + "." + String(year) + " " + String(week[dayW]);
    if (day < 10 && month < 10)
      date = "0" + String(day) + ".0" + String(month) + "." + String(year) + " " + String(week[dayW]);
    if (day >= 10 && month >= 10)
      date = String(day) + "." + String(month) + "." + String(year) + " " + String(week[dayW]);
    //Serial.println(date);
    if (date.length() == 15) //Salı - Cuma
      display.setCursor(19, 57);
    else if (date.length() == 19) //Çarşamba - Perşembe
      display.setCursor(7, 57);
    else if (date.length() == 20) //Pazartesi - Cumartesi
      display.setCursor(4, 57);
    else if (date.length() == 16) //Pazar
      display.setCursor(16, 57);
    display.print(date);
    //display.drawBitmap(104, 0, battery, 24, 24, WHITE);
    display.display();
    reelTime();
    before = current;
  }
}
