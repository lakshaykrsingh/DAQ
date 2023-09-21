#include <SoftwareSerial.h>

const int hc12TxPin = 2;   // HC-12 transmit pin
const int hc12RxPin = 3;  // HC-12 receive pin
SoftwareSerial hc12(hc12RxPin, hc12TxPin);  // create a SoftwareSerial object to communicate with the HC-12

class MyClass {
  public:
    int value1;
    float value2;
    char value3[10];
};

void setup() {
  Serial.begin(9600);  // start serial communication for debugging
  hc12.begin(9600);  // start serial communication with the HC-12
}

void loop() {
  // receive a MyClass object from the HC-12
  if (hc12.available() >= sizeof(MyClass)) {  // make sure there are enough bytes available to read a MyClass object
    MyClass receivedObject;
    hc12.readBytes((byte*)&receivedObject, sizeof(receivedObject));  // read the bytes into the MyClass object
    Serial.print("value1: ");
    Serial.println(receivedObject.value1);  // print the value1 field of the received object
    Serial.print("value2: ");
    Serial.println(receivedObject.value2);  // print the value2 field of the received object
    Serial.print("value3: ");
    Serial.println(receivedObject.value3);  // print the value3 field of the received object
  }
}
