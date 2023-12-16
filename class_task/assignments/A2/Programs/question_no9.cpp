#include<iostream>
using namespace std;
int main() {
    int number, factorial = 1;
    // Input a number from the user
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        cout << "We cannot find the factorial of a negative value." << endl;
    } else if (number <= 1) {
        cout << number << "! = " << factorial << endl;
    } else {
        int counter = number;
        while (counter >= 2) {
            factorial = factorial * counter;  // Multiply the factorial by the current counter
            counter--;            // Decrement the counter
        }
        cout << number << "! = " << factorial << endl;
    }
    return 0;
}
