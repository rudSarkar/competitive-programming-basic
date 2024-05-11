#include <iostream>

using namespace std;

int main() {
    double fahrenheit;
    double result;

    cin >> fahrenheit;

    result = (fahrenheit - 32) * 5/9;

    cout << result << endl;

    return 0;
}