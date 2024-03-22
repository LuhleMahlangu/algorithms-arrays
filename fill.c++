#include <iostream>
#include <string>

using namespace std;



int main()
{   


    // fill() = Fills a range of elements with a specific value
    //          fill(begin, end, value)
 
    const int SIZE = 5;
    string foods[SIZE];

    fill(foods, foods + SIZE, "pizza");

    for(string food : foods){
        cout << food << endl;
    }

    return 0;

}