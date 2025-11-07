#include <iostream> // library or header files
using namespace std;

float toCelsius(float f)
{
    return (5.0 / 9.0) * (f - 32.0);
}

int main()
{

    float f_val = 98.8;
    cout << toCelsius(f_val);

    return 0;
}

/*
g++ main.cpp -o main
./main
*/