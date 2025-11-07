#include <iostream> // library or header files
using namespace std;

void swapNumbers(int &x, int &y){
    int z = x;
    x = y;
    y = z;  
}

void modifyStringByReference(string &word){
    word += " ....!";
}

int main()
{

    int firstNum = 200;
    int secondNum = 100;

    cout << firstNum << " - " << secondNum << endl;
    swapNumbers(firstNum, secondNum);
    cout << firstNum << " - " << secondNum << endl;

    string text = "Hello";
    cout << text << endl;
    modifyStringByReference(text);
    cout << text << endl;

    return 0;
}

/*
g++ main.cpp -o main
./main
*/