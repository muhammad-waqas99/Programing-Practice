#include <iostream>
using namespace std;

int fact(int n) {
    if (n < 0) return -1; 
    if (n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    int result = fact(n);
    if (result == -1) cout << "Invalid input! Please enter a non-negative number." << endl;
    else cout << "Factorial of " << n << " is " << result << endl;
    
    return 0;
}