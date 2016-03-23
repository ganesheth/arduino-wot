#include "Arduino.h"
#include "CoAPBinding.h"
#include <coap.h>

CoAPBinding::CoAPBinding(UDP &udpTransport){
  pCoap = new Coap(udpTransport);
  spCoap = pCoap;
  //pCoap->server(callback_light, "light");
  pCoap->start();
}
