#include<iostream>
#include<string>
using namespace std;

//POinters stores the address and we can make several diff pointers like charcter pointer , floating point pointer , etc..


int main(){

    int a=34;
    int* ptra;       //pointer's value pointing towards the variable
    ptra = &a;      //address of the pointer

    cout<<"The value of a is "<<*ptra<<endl;
    cout<<"The value of address of a is "<<ptra<<endl;          //we can also write "&a" as address of a

    return 0;
}