#include <iostream>

using namespace std;

int main()
{

    int n, digit;

    int i = 1;

    cout << "Enter Your Number : ";

    cin >> n;

    cout << "Reverse Number ";

    while (n > 0)
    {

        digit = n % 10;

        cout << digit;

        n = n / 10;
    }

    return 0;
}