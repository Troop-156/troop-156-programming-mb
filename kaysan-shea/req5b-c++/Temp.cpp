#include "Temp.h"
 
double Temp::LOW_TEMP_F_WARNING=0.;  // Program constants
double Temp::HIGH_TEMP_F_WARNING=100.;
 
Temp::Temp(void)  // default constructor
{
}
 
Temp::~Temp(void) // default destructor
{
}
 
Temp::Temp(const double &in) // copy constructor
{
  temperature=in;
}
 
double Temp::getT()  // getter
{
    return temperature;
}
 
void Temp::setT(double in) // setter
{
    temperature=in;
}