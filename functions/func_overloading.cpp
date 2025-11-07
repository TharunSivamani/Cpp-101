#include <iostream> // library or header files
using namespace std;

int addFunc(int x, int y);
float addFunc(float x, float y);
double addFunc(double x, double y);

int main()
{

    int x, y = 100;
    float a, b = 100.001;
    double w, z = 100.09876;

    addFunc(x, y);
    addFunc(a, b);
    addFunc(w, z);

    return 0;
}

int addFunc(int x, int y){
    cout << x+y << endl;
    return x+y;
}

float addFunc(float x, float y)
{
    cout << x + y << endl;
    return x + y;
}

double addFunc(double x, double y)
{
    cout << x + y << endl;
    return x + y;
}
/*
g++ main.cpp -o main
./main
*/