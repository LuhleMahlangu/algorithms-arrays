#include <iostream>
#include <string>

using namespace std;



int main()
{

    // ARRAY = A data structure that can hold multiple values.
    //          values are accesesed by an index number
    //          "Kind of like a variable that holds multiple values"
   

   //string cars[] = {"Toyota", "Mercedes-Benz", "Lancia"};


//Declaring values then later assigning the values
    string cars[3];
   
   cars[0] = "Toyota";
   cars[1] = "Mercedes-Benz";
   cars[2] = "Lancia";

   cout << cars[0] << endl;
   cout << cars[1] << endl;
   cout << cars[2] << endl;

    return 0;

}