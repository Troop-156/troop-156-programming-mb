#include "FTemp.h"
 
 
FTemp::FTemp(void)
{
}
 
 
FTemp::~FTemp(void)
{
}
 
 
FTemp::FTemp(const double &inval)
{
  temperature = inval;
}
 
 
double FTemp::convert(const double &in){
 
    return in*1.8+32.;
}