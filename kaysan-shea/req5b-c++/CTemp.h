#ifndef _INCL_GUARD_CTEMP
#define _INCL_GUARD_CTEMP
 
#include "Temp.h"
#include "FTemp.h"
 
 
class CTemp :
    public Temp
{
public:
    CTemp(const double &in);
    CTemp(void);
    ~CTemp(void);
    CTemp &operator =(FTemp &);
    double convert(double in);
};
 
#endif