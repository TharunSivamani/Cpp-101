#include <iostream> // library or header files
#include <iomanip>
#include <string>
using namespace std;

/*


*/

int main()
{
    // cout<<"Enter you age: ";
    // // cin >> age;
    // int age=10;
    // cout << "Age: "<<age<<endl;

    // // cout<<fixed<<setprecision(10);

    // char gender = 'M';
    // char gender_int = 65;
    // cout<<gender<<endl;
    // cout<<gender_int<<endl;

    // string greeting = "Hello";
    // cout<<greeting<<endl;

    // string firstName;
    // cout << "Type your first name: ";
    // cin >> firstName; // get user input from the keyboard
    // cout << "Your name is: " << firstName;

    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "\nYour full name is: " << fullName;

    return 0;
}
