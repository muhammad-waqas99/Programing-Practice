#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, average;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    average = (num1 + num2 + num3) / 3.0;

    cout << "Average = " << average << endl;

    return 0;
}