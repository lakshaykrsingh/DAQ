#include <SoftwareSerial.h>

const int hc12TxPin = 2;   // HC-12 transmit pin
const int hc12RxPin = 3;  // HC-12 receive pin
SoftwareSerial hc12(hc12RxPin, hc12TxPin);  // create a SoftwareSerial object to communicate with the HC-12
/* SoftwareSerial funct(Tx, Rx) */
class MyClass {
  public:
    int value1;
    float value2;
    char value3[10];
};
void setup() {
  hc12.begin(9600);  // start serial communication with the HC-12
}

void loop() {
  // create a MyClass object and fill it with some data
  MyClass myClass;
  myClass.value1 = 123;
  myClass.value2 = 456.789;
  strcpy(myClass.value3, "abcdefghij");

  // send the MyClass object over the HC-12
  hc12.write((byte*)&myClass, sizeof(myClass));
  delay(1000);  // delay for 1 second before sending the next object
}
