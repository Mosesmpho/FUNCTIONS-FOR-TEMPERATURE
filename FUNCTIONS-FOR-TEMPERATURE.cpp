#include <iostream>
using namespace std;

double TempFah(double numC) {
    return (numC + 160) / 4;
}
double TempCer(double numC) {
    return (TempFah(numC) - 32) * 5 / 9;
}

int main() {
    double numC;

    cout << "Enter the number of chirps per minutes" << endl;
    cin >> numC;

    cout << "The Fahrenheit Temperature is " << TempFah(numC) << endl;
    cout << "The Temperature in Celsius is " << TempCer(numC);


    return 0;
}