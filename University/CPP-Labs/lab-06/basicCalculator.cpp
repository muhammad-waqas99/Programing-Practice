#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout<< "Enter first number: ";
    cin >>num1;

    cout<< "Enter second number: ";
    cin >>num2;

    cout <<"Sum = "<< num1 + num2 <<endl;
    cout << "Difference = " << num1 - num2 <<endl;
    cout << "Product = "<< num1 * num2 <<endl;

    if (num2 != 0) {
        cout<< "Quotient = "<< num1 / num2 <<endl;
        cout<< "Remainder = "<< num1 % num2 <<endl;
    } else {
        cout << "Cannot calculate quotient and remainder because divisor is zero." <<endl;
    }

    return 0;
}