#include<iostream>
using namespace std;
//functions

int add(int a , int b){
    int c;
    c=a+b;
    return c;
}

int main(){

    int a , b;
    cout<<"Enter 1st and 2nd number"<<a<<b<<endl;
    cin>>a>>b;
    cout<<"the function returned "<<add(a,b);
    
    return 0;

}