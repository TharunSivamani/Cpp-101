#include <iostream> // library or header files
using namespace std;

/*

C++ Friend Functions
Normally, private members of a class can only be accessed using public methods like getters and setters. But in some cases, you can use a special function called a friend function to access them directly.

A friend function is not a member of the class, but it is allowed to access the class's private data:

*/

class Employee{
    private:
        int salary;

    public:
        Employee(int s){
            salary = s;
        }

        friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp){
    cout << "Salary: " << emp.salary;
}

int main()
{

    Employee myEmp(50000);
    displaySalary(myEmp);

    return 0;
}

/*
g++ main.cpp -o main
./main
*/