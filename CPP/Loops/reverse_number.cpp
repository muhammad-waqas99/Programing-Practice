#include <iostream>
using namespace std;

int main()
{
    int number;
    int reversed = 0;
    int digit;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0)
    {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }

    cout << "Reversed Number = " << reversed << endl;

    return 0;
}