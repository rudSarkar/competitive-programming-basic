#include <iostream>

using namespace std;

int main() {
    int minutes, hours;

    cin >> minutes;

    hours = minutes / 60;
    minutes = minutes % 60;

    cout << hours << " Hour(s) " << minutes << " Minute(s)" << endl;

    return 0;

    // reference I used
    // https://www.tutorialspoint.com/c-program-to-convert-days-into-months-and-number-of-days
}