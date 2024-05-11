#include <iostream>

using namespace std;

int main() {
    int years, months, days;

    cin >> days;

    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;

    cout << years << " Year(s)" << endl;
    cout << months << " Month(s)" << endl;
    cout << days << " Day(s)" << endl;

    return 0;

    // reference I used
    // https://www.tutorialspoint.com/c-program-to-convert-days-into-months-and-number-of-days
}