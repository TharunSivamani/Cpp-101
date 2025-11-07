#include <iostream> // library or header files
using namespace std;

/*


*/

int main()
{

    // int arr[5] = {1,2,3,4,5};
    // for(int i=0; i<5; i++){
    //     cout<< arr[i]<< endl;
    // }

    // int arr[5];

    // cout << arr << endl;

    // cout << &arr[0];

    // int arr[] = {1,2,3,4,5};

    // // find the size of an array
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n << endl;
    
    // int *ptr = arr; // pointer to the first element
    // int n_ptr = sizeof(arr) / sizeof(*ptr); // since it points to the first element
    // cout << n_ptr << endl;
    // cout<< *(ptr+1) << "";

    string cars[4] = {"Volvo", "BMW", "Virtus", "Porsche"};
    // cout << *cars;
    for (string s:cars){cout<<s<<endl;}

    return 0;

}

/*
g++ main.cpp -o main
./main
*/