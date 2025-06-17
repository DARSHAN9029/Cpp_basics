#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,3,34,4,42};
    cout<<arr[2];

    //1d array
     int marks[6];
     for(int i=0;i<6;i++)
     {
         cout<<"Entre the marks of "<<i<<"th student"<<endl;
         cin>>marks[i];
     }

        for(int i=0;i<6;i++)
    {
        cout<<"The marks of "<<i<<"th student is : "<<marks[i]<<endl;
    }

    //2d ARRAY
    int arr2d[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2 ; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "The value at " << i << "," << j << " is " << arr2d[i][j] << endl;
        }
    }

    return 0;
}