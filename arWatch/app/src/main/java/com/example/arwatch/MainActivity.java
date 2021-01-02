package com.example.arwatch;

import android.app.ProgressDialog;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothSocket;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncTask;
import android.os.BatteryManager;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.view.Window;
import android.widget.ImageView;
import android.widget.Toast;

import java.io.IOException;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.UUID;

import static com.example.arwatch.BluetoothDeviceListActivity.EXTRA_ADDRESS;

public class MainActivity extends AppCompatActivity {
    ImageView btnWp, btnSms, btnArW, btnBt, btnBattery, btnCall;
    boolean wpEnable = false, batteryEnable = false, callEnable = false;
    public boolean smsEnable;
    String address = null;
    private ProgressDialog progress;
    public BluetoothAdapter myBluetooth = null;
    public BluetoothSocket btSocket = null;
    public boolean isBtConnected = false;
    static final UUID MY_UUID = UUID.fromString("00001101-0000-1000-8000-00805F9B34FB");
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Intent blueAddress = getIntent();

        address = blueAddress.getStringExtra(EXTRA_ADDRESS);
        btnWp = findViewById(R.id.btnWp);
        btnSms = findViewById(R.id.btnSms);
        btnArW = findViewById(R.id.btnAw);
        btnBt = findViewById(R.id.btnBt);
        btnBattery = findViewById(R.id.btnBattery);
        btnCall = findViewById(R.id.btnCall);

        new BtConnect().execute();

        btnCall.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if (!callEnable) {
                    btnCall.setImageResource(R.drawable.call_on);
                    callEnable = true;
                    messages("Arama bildirimleri açık.");
                } else if (callEnable) {
                    btnCall.setImageResource(R.drawable.call_off);
                    callEnable = false;
                    messages("Arama bildirimleri kapalı.");
                }
            }
        });

        btnWp.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if (wpEnable) {
                    btnWp.setImageResource(R.drawable.wp_off);
                    wpEnable = false;
                    messages("Whatsapp bildirimleri kapalı.");
                }
                else if (!wpEnable) {
                    btnWp.setImageResource(R.drawable.wp_on);
                    wpEnable = true;
                    messages("Whatsapp bildirimleri açık.");
                }
            }
        });

        btnArW.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                try {
                    Date now = new Date();
                    DateFormat df = new SimpleDateFormat("yyyy/MM/dd");
                    Calendar calendar = Calendar.getInstance();
                    calendar.setTime(now);
                    String dateData = "0:";
                    int hours, minutes, seconds, day, month, year, dayN;
                    hours = calendar.get(Calendar.HOUR_OF_DAY);
                    if (hours < 10) dateData += "0" + hours + ":";
                    else dateData += hours + ":";
                    minutes = calendar.get(Calendar.MINUTE);
                    if (minutes < 10) dateData += "0" + minutes + ":";
                    else dateData += minutes + ":";
                    seconds = calendar.get(Calendar.SECOND);
                    if (seconds < 10) dateData += "0" + seconds + ":";
                    else dateData += seconds + ":";
                    day = calendar.get(Calendar.DAY_OF_MONTH);
                    if (day < 10) dateData +="0" + day + ":";
                    else dateData += day + ":";
                    month = calendar.get(Calendar.MONTH);
                    month += 1;
                    if (month < 10) dateData += "0" + month + ":";
                    else dateData += month + ":";
                    year = calendar.get(Calendar.YEAR);
                    dayN = calendar.get(Calendar.DAY_OF_WEEK);
                    dateData += year + ":" + dayN;
                    messages(dateData);
                    sendData(dateData,"Tarih ve saat bilgileri aktarıldı.");
                } catch (Exception e) {
                    messages("Tarih ve saat aktarılamadı.");
                }
            }
        });

        btnSms.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                /*if (!smsEnable) {
                    btnSms.setImageResource(R.drawable.sms_on);
                    smsEnable = true;
                    messages("SMS bildirimleri açık");
                } else if (smsEnable) {
                    btnSms.setImageResource(R.drawable.sms_off);
                    smsEnable = false;
                    messages("SMS bildirimleri kapalı.");
                }*/
                sendData("Merhaba Dunya","Gönderildi");
            }
        });

        btnBt.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent openBtList = new Intent(getApplicationContext(), BluetoothDeviceListActivity.class);
                startActivity(openBtList);
            }
        });

        btnBattery.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                if (!batteryEnable) {
                    btnBattery.setImageResource(R.drawable.battery_on);
                    batteryEnable = true;
                    IntentFilter batteryLevel = new IntentFilter(Intent.ACTION_BATTERY_CHANGED);
                    registerReceiver(receiverBattery, batteryLevel);
                }else if (batteryEnable) {
                    btnBattery.setImageResource(R.drawable.battery_off);
                    batteryEnable = false;
                }
            }
        });
    }

    private class BtConnect extends AsyncTask<Void, Void, Void> {
        private boolean connectedSuccess = true;

        @Override
        protected void onPreExecute() {
            progress = ProgressDialog.show(MainActivity.this,"Bağlanıyor...","Lütfen bekleyiniz...");
        }

        @Override
        protected Void doInBackground(Void... devices) {
            try {
                if (btSocket == null || !isBtConnected) {
                    myBluetooth = BluetoothAdapter.getDefaultAdapter();
                    BluetoothDevice device = myBluetooth.getRemoteDevice(address);
                    btSocket = device.createInsecureRfcommSocketToServiceRecord(MY_UUID);
                    BluetoothAdapter.getDefaultAdapter().cancelDiscovery();
                    btSocket.connect();
                }
            } catch (IOException e) {
                e.printStackTrace();
                connectedSuccess = false;
            }
            return null;
        }

        @Override
        protected void onPostExecute(Void result) {
            super.onPostExecute(result);
            if (!connectedSuccess) {
                messages("Bağlantı hatası, lütfen tekrar deneyiniz.");
                finish();
            } else {
                messages("Bağlantı başarılı.");
                isBtConnected = true;
            }
            progress.dismiss();
        }
    }

    private void Disconnect() {
        if (btSocket != null);
        try {
            btSocket.close();
        }catch (IOException e) {
            messages("Hata!");
        }
        finish();
    }

    public void sendData(String data, String notification) {
        if (btSocket != null) {
            try {
                btSocket.getOutputStream().write(data.getBytes());
                messages(notification);
            } catch (IOException e) {
                messages("Hata!");
            }
        }
    }

    public void messages(String s) {
        Toast.makeText(getApplicationContext(), s, Toast.LENGTH_LONG).show();
    }

    private BroadcastReceiver receiverBattery = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            int level = intent.getIntExtra(BatteryManager.EXTRA_LEVEL,-1);
            MainActivity main = new MainActivity();
            boolean batteryController;
            batteryController = main.batteryEnable;
            if (level <= 100 && batteryController == true) {
                main.sendData("2","Pil bilgileri gönderildi.");
            }
        }
    };
}


