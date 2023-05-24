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


    cout << "Init(const polygon &p) func test" << endl;
    c.Init(a);
    c.Dump();//init(const polygon &p) works


    cout << "Init func test" << endl;
    a.Init();
    a.Dump();//init() function works but does the same thing as reset() func



    if (a == b)//tests the comparison operator
        cout << "a and b have same dimensions\n\n";
    else
        cout << "a and b have different dimensions\n\n";

    

    if (a == c)//2nd test for comparsion operator
        cout << "a and c have same dimensions\n\n";
    else
        cout << "a and c have different dimensions\n\n";


   

    if (d.CheckbottomSide())//cout messages describes the test
        cout << "With given params(-1,3,-2) the functions fails its description of testing if bottomside is negative\n\n";
    else
        cout << "With given params(-1,3,-2) the functions fulfills its description of testing if bottomside is negative\n\n";


    if (d.Checkpropieties())//tests if d's dimensions have negative values but it lacks to check if they are equal to zero
        cout << "Dimensional values are bigger than zero\n\n ";
    else
        cout << "Dimensional values are bigger than zero\n\n";

    if (a.Checkpropieties())
        cout << "A has 0 as its dimensions\n\n";//it checks if one of A's dims is zero but actually they all are
    else
        cout << "A does not have 0 as its dimensions\n\n";

  
    //3 tests to see each value individually
    printf("%f is e's oblique side value\n\n", e.GetSide());

    printf("%f is e's area\n\n", e.Area());

    printf("%f is e's perimeter\n\n", e.Perimeter());

    e.WarningMessage("test warning message\n\n");

    e.ErrorMessage("test error message\n\n");





    

  

  


return 0;
} 
  
    
    
  