#include <iostream>
using namespace std;
int main()
{


    int index = 0;
    //while
    while (index < 32)
    {
        cout << "You are at index number :" << index << endl;
        index = index + 1;
    }
    //do-while
    do
    {
        cout << "You are at index number :" << index << endl;
        index = index + 1; 
    }while (index<33)

    //for loop
    for (int i=0;i<=34;i++)
    {
        cout << "You are at index number :" <<i<< endl;
        i = i + 1;
    }
    
    return 0;
    
}