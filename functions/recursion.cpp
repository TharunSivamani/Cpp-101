#include <iostream> // library or header files
using namespace std;

void countdown(int n){
    if (n>0){
        cout << n << " ";
        countdown(n-1);
    }
}

int factorial(int n){
    if (n>1){
        return n*factorial(n-1);
    }
    return 1;
}

int factorial_left_right(int start, int end)
{
    if (start <= end)
    {
        int ans = start * factorial_left_right(start + 1, end);
        return ans;
    }
    return 1;
}

int main()
{

    int a=5;
    countdown(a);
    cout << endl;
    cout << factorial(10) << endl;
    cout << factorial_left_right(1, 10) << endl;

    return 0;
}

/*
g++ main.cpp -o main
./main
*/