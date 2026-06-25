#include <iostream>
using namespace std;

long long fact(int f) {
    long long factorial = 1;

    for (int i = 1; i <= f; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;


    if (n < 0) {
    cout << "Factorial of a negative number is not defined.";
    return 0;
}

    long long f = fact(n);
    cout << "Factorial of given number " << n << " is: " << f;

    return 0;
}