#include <iostream>
#include <string>
using namespace std;

// struct
// {
//     int myNum;
//     string myString;
// }myStruct1, myStruct2, myStruct3;

struct car{
    string brand;
    string model;
    int year;
};

struct student{
    string name;
    int age;
    char grade;
};


int main()
{

    // car myCar1;
    // myCar1.brand = "BMW";
    // myCar1.model = "X5";
    // myCar1.year = 1009;

    student s1;
    s1.name="Liam";
    s1.age=35;
    s1.grade='A';

    cout << s1.name << " " << s1.age << " " << s1.grade << endl;

    return 0;
}