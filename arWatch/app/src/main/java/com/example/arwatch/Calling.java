package com.example.arwatch;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.telephony.TelephonyManager;

public class Calling extends BroadcastReceiver {

    @Override
    public void onReceive(Context context, Intent intent) {
        MainActivity main = new MainActivity();
        if(intent.getStringExtra(TelephonyManager.EXTRA_STATE).equals(TelephonyManager.EXTRA_STATE_RINGING)){
            String inComingNumber = intent.getStringExtra(TelephonyManager.EXTRA_INCOMING_NUMBER);
            main.messages("Arayan Kişi: " + inComingNumber);
        }
        else if(intent.getStringExtra(TelephonyManager.EXTRA_STATE).equals(TelephonyManager.EXTRA_STATE_IDLE) || intent.getStringExtra(TelephonyManager.EXTRA_STATE).equals(TelephonyManager.EXTRA_STATE_OFFHOOK)){
            main.messages("Arama Bekleniyor.");
        }
    }
}
