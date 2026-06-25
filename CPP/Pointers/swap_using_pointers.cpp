#include <iostream>
using namespace std;

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    cout << "Enter the first Number: ";
    cin >> a;

    cout << "Enter the second Number: ";
    cin >> b;

    swap(&a, &b);

    cout << "After swapping:\n";
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;

    return 0;
}