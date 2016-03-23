/*
  WebOfThings.h - Library for experimenting with WoT prinicples
*/

#ifndef WebOfThings_h
#define WebOfThings_h

#include "Arduino.h"
#include <ArduinoJson.h>

class Metadata {
  
};
class InteractionDescription {
  
};

class PropertyDescription : public InteractionDescription {
  public:
    String name;
    
  
};

class ThingDescription
{
  public:
    ThingDescription();
  private:
    JsonObject* pJsonObject;
    Metadata metadata;
    InteractionDescription interactions[5];
};



class ThingServer {
  public:
    ThingServer();
    void addServedThing(ThingDescription thingDescription);
    
  private:
    ThingDescription servedThings[1];
  
};

#endif
