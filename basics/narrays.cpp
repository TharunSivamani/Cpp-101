#include <iostream> // library or header files
using namespace std;

/*


*/

int main()
{
    int nd[2][3] = {{1,2,3},{3,4,5}};

    int* ptr = &nd[0][1];
    cout << ptr << endl; 
    cout << *ptr << endl; 

    cout << nd << endl;

    return 0;
}

/*
g++ main.cpp -o main
./main
*/