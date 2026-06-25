#include <iostream>
using namespace std;

double addition(double x, double y) {
    return x + y;
}

double subtraction(double x, double y) {
    return x - y;
}

double multiplication(double x, double y) {
    return x * y;
}

double division(double x, double y) {
    return x / y;
}

int main() {
    double a, b;
    char op;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Available operators: +, -, *, /" << endl;
    cout << "Enter the operator: ";
    cin >> op;

    if (op == '+') {
        cout << "Result = " << addition(a, b);
    }
    else if (op == '-') {
        cout << "Result = " << subtraction(a, b);
    }
    else if (op == '*') {
        cout << "Result = " << multiplication(a, b);
    }
    else if (op == '/') {
        if (b == 0) {
            cout << "Error: Division by zero is not allowed.";
        } else {
            cout << "Result = " << division(a, b);
        }
    }
    else {
        cout << "Invalid operator.";
    }

    return 0;
}