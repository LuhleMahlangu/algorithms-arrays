#include <iostream>
#include <string>

using namespace std;



int main()
{   

    string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    /*
    for(int i = 0; i < sizeof(students)/sizeof(string); i++){
        cout << students[i] << endl;
    }
    */

   //Foreach loops
   for(string student : students){
    cout << student << endl;    
   }

    return 0;

}