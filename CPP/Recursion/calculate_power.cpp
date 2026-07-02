#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b < 0) return -1; 
    if (b == 0) return 1;
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    cout << "Enter Base: ";
    cin >> a;
    cout << "Enter Power: ";
    cin >> b;

    int result = power(a, b);
    if (result == -1) cout << "Invalid exponent! Please enter non-negative power." << endl;
    else cout << a << " raised to the power " << b << " is " << result << endl;
    
    return 0;
}