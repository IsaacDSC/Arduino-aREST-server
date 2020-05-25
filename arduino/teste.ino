#include "IsaacWIFI.h"

void setup() {
  WIFI esp8266 = WIFI("HOME(R&I)","33264672i");
  IPAddress ip(192,168,1,51);
  IPAddress msk(255,255,255,0);
  IPAddress gw(192,168,1,1);
  esp8266.definirIP(ip,msk,gw);
  esp8266.HTTP(80);
}

void loop() {
  // put your main code here, to run repeatedly:

}
