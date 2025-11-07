#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

    // vector<string> cars = {"Volvo", "BMW", "Ford"};

    // cars.push_back("Virtus");

    // // for (string s:cars){
    // //     cout << s << endl;
    // // }

    // cout << "Size of the cars vector is: " << (sizeof(cars) / sizeof(cars[0])) << endl;
    // // the above logic doesnt work for vectors;
    // cout << "Size of the cars vectors is: " << cars.size() << endl;

    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};
    // float avg, sum = 0;

    // int i;

    // int length = sizeof(ages) / sizeof(ages[0]);

    // for (int age:ages){
    //     sum += age;
    // }

    // avg = sum / length;

    // cout << "Sum, Avg is: " << sum << ", " << avg;

    // #include <limits>
    // int dummy = numeric_limits<int>::max();  // like Integer.MAX_VALUE
    // int mdummy = numeric_limits<int>::min(); // like Integer.MIN_VALUE
    int dummy=1e5;
    int mdummy = 0;
    for(int age: ages){
        dummy = min(age, dummy);
        mdummy = max(age, mdummy);
    }

    cout << "Min age is: " << dummy << endl;
    cout << "Max age is: " << mdummy << endl;

    return 0;
}