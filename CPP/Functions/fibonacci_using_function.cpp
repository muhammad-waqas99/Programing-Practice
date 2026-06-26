#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int first = 0;
    int second = 1;

    if (n == 0)
    {
        cout << first;
        return;
    }

    if (n == 1)
    {
        cout << first << endl;
        cout << second;
        return;
    }

    cout << first << endl;
    cout << second << endl;

    for (int i = 2; i <= n; i++)
    {
        int next = first + second;
        cout << next << endl;

        first = second;
        second = next;
    }
}

int main()
{
    int n;

    cout << "Enter the Number: ";
    cin >> n;

    fibonacci(n);

    return 0;
}