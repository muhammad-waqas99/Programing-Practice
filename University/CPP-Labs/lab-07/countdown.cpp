#include <iostream>

using namespace std;

int main()
{

    int n;

    cout << "Enter Your Number : ";

    cin >> n;

    do
    {

        cout << n;

        n--;

        cout << endl;

    } while (n >= 1);

    return 0;
}