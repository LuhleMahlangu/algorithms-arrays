#include <iostream>
#include <string>

using namespace std;



int main()
{   

    // sizeof() = determines the size in bytes of a:
    //            variables, data type, class, objects, etc

    string name = "Luhle";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    string students[] ={"Spongebob", "Patrick", "Squidward", "Sandy"};

    cout << sizeof(students)/sizeof(string) << " elements" << endl;

    return 0;

}