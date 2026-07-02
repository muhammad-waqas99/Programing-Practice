#include <iostream>
using namespace std;

int sum(int n) {
    if (n < 0) return -1; 
    if (n == 0) return 0;
    return n + sum(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = sum(n);
    if (result == -1) cout << "Invalid input! Please enter a non-negative number." << endl;
    else cout << "Sum of numbers up to " << n << " is " << result << endl;
    
    return 0;
}