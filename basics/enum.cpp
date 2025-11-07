#include <iostream> // library or header files
using namespace std;

// enum Level
// {
//     LOW,
//     MEDIUM,
//     HIGH
// };

enum Percent{
    LOW=25,
    MEDIUM=50,
    HIGH=75
};

int main()
{

    // enum Level myVar;
    enum Percent myP;
    // myVar = MEDIUM;
    // cout << myVar << endl;
    // myVar = HIGH;
    // cout << myVar << endl;
    
    myP = MEDIUM;
    cout << myP << endl;
    myP = HIGH;
    cout << myP << endl;

    return 0;
}

/*
g++ main.cpp -o main
./main
*/