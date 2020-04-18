#ifndef _INCL_GUARD_FTEMP
#define _INCL_GUARD_FTEMP
 
 
#include "Temp.h"
 
 
class FTemp :
    public Temp
{
public:
    FTemp(const double &in);
    FTemp(void);
    ~FTemp(void);
    double convert(const double &in);
 
};
 
 
#endif