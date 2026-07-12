#include <iostream>
using namespace std;

int main()
{
    int limit;
    int evenTotal = 0;
    int oddTotal = 0;

    cout << "Enter the last number: ";
    cin >> limit;

    for (int num = 1; num <= limit; num++)
    {
        if (num % 2 == 0)
        {
            evenTotal += num;
        }
        else
        {
            oddTotal += num;
        }
    }

    cout << "\nSum of Even Numbers = " << evenTotal << endl;
    cout << "Sum of Odd Numbers = " << oddTotal << endl;

    return 0;
}