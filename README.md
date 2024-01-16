<h2>Bluetooth Light Switch</h2>

A program created for a bluetooth-controlled (via an HC-05 module) wireless light switch built using the Arduino platform. 
The light switch utilizes two servo motors, which flip the light switch on and off. 

![IMG_1215](https://github.com/ThomasQi3141/Bluetooth-Light-Switch/assets/131242218/e2940ebc-a3c5-4208-83bf-fe50bae2e2db)


### How does this work?
➡️ The HC-05 module connects to the Android phone via Bluetooth
➡️ The HC-05 module receives the input, which is then sent to the Arduino UNO
➡️ The servo motors get activated, which turns the light switch on/off

### To Use:

**Step 1:** Attach the two servos to ports 12 and 13.

**Step 2:** Attach the HC-05 module to the TX and RX (or 0 and 1) ports.

**Step 3:** Download the Bluetooth.apk file on Android or create your own program.

**Step 4:** Download and upload the Bluetooth_Servo_Control.ino file to your Arduino using the Arduino IDE.

**Step 5:** Connect your device to the HC-05 module after holding down the reset button. <br><br>


**Note:** The HC-05 module is currently not compatible with IOS devices due to MFi Licensing issues. 
