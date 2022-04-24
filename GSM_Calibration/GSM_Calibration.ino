
#include<SoftwareSerial.h>
SoftwareSerial gsm_port(2,3);

void setup()
{
 gsm_port.begin(9600);
 delay(10000);
 gsm_port.println("AT");    //To send SMS in Text Mode
  delay(2000);
  gsm_port.println("AT+CMGF=1");    //To send SMS in Text Mode
  delay(2000);
  gsm_port.println("AT+CMGS=\"+919927715123\"\r"); // change to the phone number you using 
  delay(2000);
  gsm_port.print("Testing SMS for GSM ");     
  delay(1000);
  gsm_port.println((char)26);//the stopping character
  delay(2000);
}

void loop()
{
  
}
