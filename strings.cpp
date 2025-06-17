#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name = "darshan";
    cout<<"The name is "<<name<<endl;    
    cout<<"The length of name is "<<name.length()<<endl;
    cout<<"The name is "<<name.substr(2,3)<<endl;
    return 0;

}