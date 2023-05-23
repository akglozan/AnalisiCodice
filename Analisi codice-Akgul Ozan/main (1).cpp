#include <iostream>
# include "polygon.h"
# include "Rectangle.h"
# include "rhombus.h"
# include "IsoTrapezoid.h"
using namespace std;
int main()
{

    IsoTrapezoid a(1,3,4);//cant assign selected values
    a.Dump();
     /*it is possibile to see the correct values are not assigned
     and the values assigned in the programme are negative
     */
    
    IsoTrapezoid c;//a normal default constructor
    c.Dump();//its debug test

 
    IsoTrapezoid b(a);//gets values from "a" so it still returns same values
    b.Dump();//its test



  


return 0;
} 
  
    
    
  