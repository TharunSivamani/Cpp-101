#include <iostream> // library or header files
using namespace std;

/*


*/

int main()
{

    string fname = "Ram";
    string &userName = fname;

    cout << &fname << endl;
    cout << &userName;

    return 0;
}

/*
g++ main.cpp -o main
./main
*/