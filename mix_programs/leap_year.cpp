// Create a C++ program that checks if a given year is a leap year.
// A leap year is divisible by 4, but 
// not divisible by 100 unless it is divisible by 400.

#include <iostream>
using namespace std;
int main()
{
    int year; // Declaration
    // Input
    cout << "Enter a year: ";
    cin >> year;
 // Leap year check
     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    }else {
            cout << year << " is not a leap year." << endl;
    }

    return 0;
}