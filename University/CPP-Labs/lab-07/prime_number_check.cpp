#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Enter your number :";

    cin >> num;

    int i;

    bool isPrime = true;

    if (num <= 1)
    {

        isPrime = false;
    }

    else
    {

        for (i = 2; i < num; i++)
        {

            if (num % i == 0)
            {

                isPrime = false;

                break;
            }
        }
    }

    if (isPrime)
    {

        cout << num << " is a prime number ";
    }

    else
    {

        cout << num << " is not a prime number ";
    }

    return 0;
}