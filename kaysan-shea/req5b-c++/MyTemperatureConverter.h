#ifndef _INCL_GUARD_MYTEMPERATURECONVERTER
#define _INCL_GUARD_MYTEMPERATURECONVERTER
 
class MyTemperatureConverter
{
protected:
     
    static const int MAX_LOOP=5;
 
public:
    MyTemperatureConverter(void);
     ~MyTemperatureConverter(void);
     
    void run(void);
 
};
#endif