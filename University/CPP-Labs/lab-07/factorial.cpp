#include <iostream>

using namespace std;

int main()
{

    int num, i = 1;

    long long f = 1;

    cout << "Enter Number : ";

    cin >> num;

    if (num < 0)
    {

        cout << "factorial of negative number is not define";
    }

    else
    {

        while (i <= num)
        {

            f = f * i;

            i++;
        }

        cout << "Factorial : " << f << endl;
    }

    return 0;
}