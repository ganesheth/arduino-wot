#include "Arduino.h"
#include <Udp.h>
#include <coap.h>

void callback_light(CoapPacket &packet, IPAddress ip, int port);
Coap* spCoap;

class CoAPBinding{
  public:
    CoAPBinding(UDP &udpTransport);

  private:
    // CoAP server endpoint url callback
    Coap* pCoap;
};
