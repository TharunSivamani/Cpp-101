#include <iostream> // library or header files
#include <ctime>
using namespace std;

/*

Date and Time
The <ctime> library allows us to work with dates and times.

To use it, you must import the <ctime> header file:

Example
#include <ctime> // Import the ctime library

Display Current Date and Time
The <ctime> library has a variety of functions to measure dates and times.

The time() function gives us a timestamp representing the current date and time. We can use the ctime() function to show the date and time that a timestamp represents:


Data Types
There are two different data types used to store the date and time: time_t for timestamps and struct tm for datetime structures.

Timestamps represent a moment in time as a single number, which makes it easier for the computer to do calculations.

Datetime structures are structures that represent different components of the date and time as members. This makes it easier for us to specify dates. Datetime structures have the following members:

tm_sec - The seconds within a minute
tm_min - The minutes within an hour
tm_hour - The hour within a day (from 0 to 23)
tm_mday - The day of the month
tm_mon - The month (from 0 to 11 starting with January)
tm_year - The number of years since 1900
tm_wday - The weekday (from 0 to 6 starting with Sunday)
tm_yday - The day of the year (from 0 to 365 with 0 being January 1)
tm_isdst - Positive when daylight saving time is in effect, zero when not in effect and negative when unknown

*/

int main()
{

    time_t timestamp;
    time(&timestamp);

    cout << timestamp << endl;
    cout << &timestamp << endl;
    cout << ctime(&timestamp) << endl;

    return 0;
}

/*
g++ main.cpp -o main
./main
*/