# Smart-Lighting-System-Prototype--Basic-IOT-Project-using-NodeMCu-and-Blynk-App

In this project the LDR sensor checks for the amount of light present in the room and if the LDR value is below the defined threshold value then, it turns on the light using Blynk IOT Application. The project is mostly same as [this one](https://github.com/JaineshRathod/Smart-Lighting-System-Prototype--Basic-IOT-Project-using-NodeMCu-and-ThingSpeak-CLoud) but has one more feature added to it, which is, an option to manually turn ON and OFF lights too and yes, the Blynk cloud instead of ThingSpeak Cloud.

Hardware Used:

1. **NodeMCu**(ESP8266) WiFi Module
2. LED's - 4
3. LDR (Light Dependant Resistor)
4. 10K Resistor

Software Used: **Arduino IDE**

Cloud Platform: **Blynk IOT App**

1.Create your own Blynk Account & create new project.
2.Choose your device in the project(Here - NodeMCu).
3.Check mail for 'Auth' key and add that in the code.
4.Add 4 buttons and one Gauge in the project.
5.The buttons should be connected to Virtual Pin V0-V3 for led1-led4 respectively.
6.The gauge has pin Analog, A0 connected to check the LDR Sensor output.

Hardware Connections:

1.Led1 Anode - GPIO16 (NodeMCu) 
2.Led2 Anode - GPIO5 (NodeMCu) 
3.Led3 Anode - GPIO4 (NodeMCu) 
4.Led4 Anode - GPIO12 (NodeMCu) 
5.LDR Sensor - A0 Pin (NodeMCu)

Google - connection of LDR with NodeMCu/Arduino

Libraries to be downloaded & installed for Arduino code:

1.Blynk.h
2.ESP8266WiFi.h

Edit required in the code:

1.Change the 'auth','ssid' and 'pass' value with your respective Authentication(auth) Key, WiFi(ssid) name and password.
2.Check the pins connected are correct.
3.Now, it is time to upload the code and start your IOT Smart Light System.
