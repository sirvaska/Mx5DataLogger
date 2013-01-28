#include "TestValues.h"
int TestValues::testCounter = 0;
boolean TestValues::alternateButtonState = false;
boolean TestValues::screenChangeState = false;

#include "Buttons.h"
long Buttons::startedDebouncingAt = 0;
int Buttons::lastButtonState = LOW;
int Buttons::buttonState = LOW;

#include "CarData.h"
int CarData::rpmOverSpeed = 0;
int CarData::RearSpeed = 0;
int CarData::Rpm = 0;
int CarData::Gear = 0;
float CarData::XG = 0.0;
float CarData::YG = 0.0;
float CarData::ZG = 0.0;
float CarData::IntakeTemp = 0.0;
boolean CarData::Stationary = true;

#include "DiagData.h"
int DiagData::RearSpeedCount = 0;
int DiagData::RpmCount = 0;
