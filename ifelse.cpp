# include <iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    if(age>150 || age<18){          //OR--->|| operator is used..
        cout<<"Not eligible age to vote "<<endl;
    }

    else if(age>=18){
       cout<<"You are eligible to vote"<<endl; 
    }

    return 0;

}