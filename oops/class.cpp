#include <iostream> // library or header files
#include <string>
using namespace std;

/*

C++ Classes/Objects
C++ is an object-oriented programming language.

Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.


Create a Class
To create a class, use the class keyword:



Create an Object
In C++, an object is created from a class. We have already created the class named MyClass, so now we can use this to create objects.

To create an object of MyClass, specify the class name, followed by the object name.

To access the class attributes (myNum and myString), use the dot syntax (.) on the object:


------------------------------

Challenge Task
Create a class called Book with the following attributes:

title (string)
author (string)
year (int)
Then create two objects of the class and print their attribute values.

Expected Output
Matilda, Roald Dahl, 1988
The Giving Tree, Shel Silverstein, 1964

*/

class Book
{
public:
    string title;
    string author;
    int year;
};

class MyClass
{
public:
    int myNum;
    string myString;
};

class Car
{
public:
    string brand;
    string model;
    int year;
};

int main()
{

    // MyClass myObj;

    // myObj.myNum = 10;
    // myObj.myString = "Text";

    // cout << myObj.myNum << endl;
    // cout << myObj.myString << endl;

    // Car carObj1;
    // carObj1.brand = "BMW";
    // carObj1.model = "X5";
    // carObj1.year = 1999;

    // // Create another object of Car
    // Car carObj2;
    // carObj2.brand = "Ford";
    // carObj2.model = "Mustang";
    // carObj2.year = 1969;

    // // Print attribute values
    // cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    // cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    Book book1;
    Book book2;

    book1.title = "Matilda";
    book2.title = "The Giving Tree";
    book1.author = "Roald Dahl";
    book2.author = "Shel Silverstein";
    book1.year = 1988;
    book2.year = 1964;

    cout << book1.title << ", " << book1.author << ", " << book1.year << endl;
    cout << book2.title << ", " << book2.author << ", " << book2.year << endl;

    return 0;
}

/*
g++ main.cpp -o main
./main
*/