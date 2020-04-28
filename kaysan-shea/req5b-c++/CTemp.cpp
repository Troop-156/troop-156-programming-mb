#include "CTemp.h"
 
 
CTemp::CTemp(void)
{
}
 
CTemp::~CTemp(void)
{
}
 
 
CTemp::CTemp(const double &inval)
{
  temperature = inval;
 
}
CTemp &CTemp::operator =(FTemp &inx)
{
    this->temperature = convert(inx.getT());
 
    return *this;
}
 
double CTemp::convert(double in){
 
    return (in-32.)/1.8;
}