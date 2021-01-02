package com.example.arwatch;

import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.Set;

public class BluetoothDeviceListActivity extends AppCompatActivity {
    ListView deviceList;

    private BluetoothAdapter myBluetooth = null;
    private Set<BluetoothDevice> bondedDevice;
    public static String EXTRA_ADDRESS = "device_address";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_bluetooth_device_list);

        deviceList = findViewById(R.id.lvDevices);
        myBluetooth = BluetoothAdapter.getDefaultAdapter();

        if (myBluetooth == null) {
            Toast.makeText(getApplicationContext(),"Cihazınız bluetooth desteklememektedir.", Toast.LENGTH_LONG).show();
            finish();
        }
        else if (!myBluetooth.isEnabled()) {
            Intent btOpen = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
            startActivityForResult(btOpen,1);
        }
        showBondedDevice();
    }

    private void showBondedDevice() {
        bondedDevice = myBluetooth.getBondedDevices();
        ArrayList list = new ArrayList();
        if (bondedDevice.size() > 0) {
            for(BluetoothDevice bt: bondedDevice) {
                list.add(bt.getName() + "\n" + bt.getAddress());
            }
        } else {
            Toast.makeText(getApplicationContext(),"Eşlenmiş cihaz bulunamadı.",Toast.LENGTH_LONG).show();
        }
        final ArrayAdapter adapter = new ArrayAdapter(this,android.R.layout.simple_list_item_activated_1, list);
        deviceList.setAdapter(adapter);
        deviceList.setOnItemClickListener(selectDevice);
    }

    private AdapterView.OnItemClickListener selectDevice = new AdapterView.OnItemClickListener() {
        @Override
        public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
            String info = ((TextView)view).getText().toString();
            String address = info.substring(info.length() - 17);
            Intent returnMainActivity = new Intent(BluetoothDeviceListActivity.this, MainActivity.class);
            returnMainActivity.putExtra(EXTRA_ADDRESS, address);
            startActivity(returnMainActivity);
        }
    };
}
