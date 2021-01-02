package com.example.arwatch;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.telephony.SmsMessage;

public class Receiver extends BroadcastReceiver {

    @Override
    public void onReceive(Context context, Intent intent) {
        Bundle bundle = intent.getExtras();
        final MainActivity main = new MainActivity();

        if (bundle != null) {
            Object[] pdus = (Object[]) bundle.get("pdus");

            for (int i = 0; i < pdus.length; i++) {
                SmsMessage messages = SmsMessage.createFromPdu((byte[]) pdus[i]);
                String number = messages.getDisplayOriginatingAddress();
                String msg = messages.getDisplayMessageBody();
                main.sendData(msg, "Mesaj Gönderildi!");
            }
        }
    }
}
