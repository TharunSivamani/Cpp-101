#include <iostream> // library or header files
using namespace std;

/*


*/

class Car{
    public:
        string brand;    
        string model;

        Car(){
            brand = "N/A";
            model = "N/A";
        }

        Car(string a, string b){
            brand = a;
            model = b;
        }

};

int main(){

    Car car1;
    Car car2("BMW", "X5");
    Car car3("Ford", "Mustang");

    cout << "Car1: " << car1.brand << " " << car1.model << "\n";
    cout << "Car2: " << car2.brand << " " << car2.model << "\n";
    cout << "Car3: " << car3.brand << " " << car3.model;

    return 0;
}

/*
g++ main.cpp -o main
./main
*/