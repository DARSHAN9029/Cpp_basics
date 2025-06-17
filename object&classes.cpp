#include <iostream>
#include <string>
using namespace std;

// CLASS IS A TEMPLATE OR BLUEPRINT
class Employee {
public:
    string name;
    int salary;

    Employee(string name, int salary, int secretPassword) { // Constructor
        this->name = name;
        this->salary = salary;
        this->secretPassword = secretPassword;
    }

    void printDetails() { // Method to "Print"...we can create many methods in class.
        cout << "The name of the 1st employee is " << this->name << " and the salary is " << this->salary << "$" << endl;
    }

    void getsecretPassword() {
        cout << "The secret Password of the employee is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

int main() {
    Employee dj("Darshan Jain", 1000, 11231232); // from constructor

    // dj.secretPassword = 1234; //  Not allowed because secretPassword is private

    dj.printDetails();
    dj.getsecretPassword();         // this will run because it is declared as a method.
    return 0;
}
