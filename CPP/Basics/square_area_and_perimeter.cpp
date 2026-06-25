#include <iostream>
using namespace std;

int main() {
    float side, area, perimeter;

    cout << "Enter side of square: ";
    cin >> side;

    area = side * side;
    perimeter = 4 * side;

    cout << "Area of Square = " << area << endl;
    cout << "Perimeter of Square = " << perimeter << endl;

    return 0;
}