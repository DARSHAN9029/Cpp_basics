#include <iostream>
using namespace std;
int main()
{
    // switch

    int age;
    cout << "Enyer your age: " << endl;
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "You are 12 years old" << endl;
        break;
    case 18:
        cout << "You are 18 years old" << endl;

    default:
        cout << "you are neither 12 nor 18 years old" << endl;
        break;
    }
}