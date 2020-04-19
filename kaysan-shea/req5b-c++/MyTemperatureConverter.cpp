#include <iostream>  // This includes the file stdio.h into your code so it knows what the functions such as printf() mean.
 
 
#include "CTemp.h"
#include "FTemp.h"
#include "MyTemperatureConverter.h"
 
 
MyTemperatureConverter::MyTemperatureConverter(void)
{
}
 
 
MyTemperatureConverter::~MyTemperatureConverter(void)
{
}
 
 
void MyTemperatureConverter::run(void)
{
 
  FTemp temp_f; // Declaration of variables that the program will use
  CTemp temp_c;
 
 
  int i; 
  double input;
 
  for(i=0; i<MAX_LOOP; i++){   // loop
 
    std:: cout << std::endl << "Enter the temperature in degrees F : ";     // Input the temperature to convert 
    std::cin >> input;     // Reads the user input
 
    temp_f.setT(input);
 
    // This is an example of function overloading. The "=" operator has been specialized for the CTemp object
    temp_c=temp_f;
     
 
     
    std::cout << "The temperature in Celisus (C) is " << temp_c.getT() << std::endl; // Output the Celcius result
 
     
    if(temp_f.getT() > Temp::HIGH_TEMP_F_WARNING){ // Check for high temperature 
      std::cout << "Remember to hydrate" << std::endl;
    }
     
    if(temp_f.getT() < Temp::LOW_TEMP_F_WARNING ){ // Check for low temperature
      std::cout << "Remember to pack Long underwear"<< std::endl;
    }
  }
}