/*
 WebOfThings.cpp 
*/

#include "Arduino.h"
#include "WebOfThings.h"

ThingDescription::ThingDescription(){
  StaticJsonBuffer<500> jsonBuffer;
  pJsonObject = &(jsonBuffer.createObject());
}

