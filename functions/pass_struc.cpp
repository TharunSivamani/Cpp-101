#include <iostream> // library or header files
using namespace std;

struct Car{
    string brand;
    int year;
};

void printCarStruct(Car c){
    cout << c.brand << " - " << c.year << endl;
}

void updateYear(Car &c){
    c.year++;
}

int main()
{

    Car myCar = {"Toyato", 2001};
    printCarStruct(myCar); 
    
    updateYear(myCar);
    printCarStruct(myCar);

    return 0;
}

/*
g++ main.cpp -o main
./main
*/