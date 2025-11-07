#include <iostream>
#include <string>
using namespace std;

int main()
{

    int numGuests;
    cout << "How many guests: ";
    cin >> numGuests;

    if (numGuests <= 0)
    {
        cout << "Number of guests less than zero.!";
        return 0;
    }

    // create memory spaces for numGuests (int)?
    string *guests = new string[numGuests];

    cin.ignore();

    for (auto i = 0; i < numGuests; i++)
    {
        cout << "Enter name for guest " << (i + 1) << ": ";
        getline(cin, guests[i]); // Read the full name (including spaces)
    }

    //     🧩 The golden rule

    // 🧠 If a pointer points to a single object, use *ptr to access the value.
    // 🧠 If a pointer points to an array, ptr[i] already dereferences automatically — no extra *needed.

    cout
        << "Guests checked in: " << endl;
    for (auto i = 0; i < numGuests; i++)
    {
        cout << guests[i];
    }

    delete[] guests;

    return 0;
}