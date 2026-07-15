#include <iostream>
using namespace std;

int reverse = 0;

int reverseNumber(int n)
{
    if (n == 0)
        return reverse;

    reverse = reverse * 10 + n % 10;
    return reverseNumber(n / 10);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed Number = " << reverseNumber(num);

    return 0;
}