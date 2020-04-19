#ifndef _INCL_GUARD_TEMP
#define _INCL_GUARD_TEMP
 
class Temp
{
protected:
    double temperature;  // temperature
 
 
public:
    Temp(void);
    virtual ~Temp(void);
    Temp(const double &in);
    double getT();
    void setT(double in);
    double convert(double in);
// Program constants
     static double LOW_TEMP_F_WARNING;  
     static double HIGH_TEMP_F_WARNING;
 
};
 
#endif