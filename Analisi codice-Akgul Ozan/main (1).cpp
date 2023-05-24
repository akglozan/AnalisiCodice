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

    IsoTrapezoid d(-1, 3, -2);//another object for testing
    d.Dump();//its debug test

    IsoTrapezoid e(6,3);//another object for testing 
    e.Dump();

   

    if (a == b)//tests the comparison operator
        cout << "comparison test success" << endl;
    else
        cout << "comparison test fail" << endl;

    

    if (a == c)//2nd test for comparsion operator
        cout << "a and c have same dimensions" << endl;
    else
        cout << "a and c have different dimensions" << endl;

    c.Init(a);
    c.Dump();//init(const polygon &p) works

    a.Init();
    a.Dump();//init() function works but does the same thing as reset() func

   

    if (d.CheckbottomSide())//cout messages describes the test
        cout << "With given params(-1,3,-2) the functions fails its description of testing if bottomside is negative" << endl;
    else
        cout << "With given params(-1,3,-2) the functions fulfills its description of testing if bottomside is negative" << endl;


    if (d.Checkpropieties())//tests if d's dimensions have negative values but it lacks to check if they are equal to zero
        cout << "Dimensional values are bigger than zero " << endl;
    else
        cout << "Dimensional values are bigger than zero " << endl;

    if (a.Checkpropieties())
        cout << "A has 0 as its dimensions" << endl;//it checks if one of A's dims is zero but actually they all are
    else
        cout << "A does not have 0 as its dimensions" << endl;

  
    //3 singular tests to see each value individually
    printf("%f is e's oblique side value\n\n", e.GetSide());

    printf("%f is e's area\n\n", e.Area());

    printf("%f is e's perimeter\n", e.Perimeter());

    e.WarningMessage("test warning message");

    e.ErrorMessage("test error message");





    

  

  


return 0;
} 
  
    
    
  