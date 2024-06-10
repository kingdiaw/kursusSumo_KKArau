// This example code is in the Public Domain (or CC0 licensed, at your option.)
// By Evandro Copercini - 2018
//
// This example creates a bridge between Serial and Classical Bluetooth (SPP)
// and also demonstrate that SerialBT have the same functionalities of a normal Serial
// Note: Pairing is authenticated automatically by this device

#include "BluetoothSerial.h"

String device_name = "mokmeng";
const int motorKiriA1 = 17;
const int motorKiriA2 = 12;
const int motorKananB1 = 18;
const int motorKananB2 = 19;

// Check if Bluetooth is available
#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

// Check Serial Port Profile
#if !defined(CONFIG_BT_SPP_ENABLED)
#error Serial Port Profile for Bluetooth is not available or not enabled. It is only available for the ESP32 chip.
#endif

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);
  SerialBT.begin(device_name);  //Bluetooth device name
  //SerialBT.deleteAllBondedDevices(); // Uncomment this to delete paired devices; Must be called after begin
  Serial.printf("The device with name \"%s\" is started.\nNow you can pair it with Bluetooth!\n", device_name.c_str());
//==== Continue code pinMode ====
pinMode(motorKiriA1,OUTPUT);
pinMode(motorKiriA2,OUTPUT);
pinMode(motorKananB1,OUTPUT);
pinMode(motorKananB2,OUTPUT);
}

void loop() {
  if (SerialBT.available()) {
    byte data = SerialBT.read();
    if (data == 'F'){ //depan
      //Write your application here
      digitalWrite(motorKiriA1,LOW);
      digitalWrite(motorKiriA2,HIGH);
      digitalWrite(motorKananB1,HIGH);
      digitalWrite(motorKananB2,LOW);
    }
    else if (data == 'B'){
      //Write your application here
      digitalWrite(motorKiriA1,HIGH);
      digitalWrite(motorKiriA2,LOW);
      digitalWrite(motorKananB1,LOW);
      digitalWrite(motorKananB2,HIGH);
    }    
    else if (data == 'R'){
      //Write your application here
      digitalWrite(motorKiriA1,LOW);
      digitalWrite(motorKiriA2,HIGH);
      digitalWrite(motorKananB1,LOW);
      digitalWrite(motorKananB2,HIGH);
    }    
    else if (data == 'L'){
      //Write your application here
      digitalWrite(motorKiriA1,HIGH);
      digitalWrite(motorKiriA2,LOW);
      digitalWrite(motorKananB1,HIGH);
      digitalWrite(motorKananB2,LOW);
    }      
    else if (data == 'S'){
      //Write your application here
      digitalWrite(motorKiriA1,HIGH);
      digitalWrite(motorKiriA2,HIGH);
      digitalWrite(motorKananB1,HIGH);
      digitalWrite(motorKananB2,HIGH);
    }
  }
  delay(20);
}
