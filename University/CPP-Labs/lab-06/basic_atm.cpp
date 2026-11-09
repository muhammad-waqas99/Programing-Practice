#include <iostream>
using namespace std;

int main()
{
    int balance, withdrawalAmount, pin;



    cout << "Enter Your PIN: ";
    cin >> pin;
    if(pin==1234){
        cout<<"Enter Your Account Balance: Rs. ";
        cin>>balance;

        cout<<"Enter Withdrawal Amount: Rs. ";
        cin>>withdrawalAmount;
            if(withdrawalAmount<= 0 )
            {
                cout<<"Invalid Withdrawal Amount";
            }
            else if(balance<=0){
                 cout<<"Invalid Balance";
            }
            else if(withdrawalAmount%500 != 0)
            {
                cout<< "Withdrawal Amount must be a multiple of Rs. 500";
            }
            else if(withdrawalAmount>50000)
            {
                cout<< "Daily Withdrawal Limit Exceeded";
            }
            else if(balance-withdrawalAmount <1000)
            {
                cout << "Insufficient Balance. Minimum Rs. 1000 must remain in your account.";
            }
            else
            {
                balance = balance - withdrawalAmount;

                cout<<"\nWithdrawal Successful!" <<endl;
                cout<<"Withdrawn Amount: Rs. " <<withdrawalAmount << endl;
                cout <<"Remaining Balance: Rs. "<<balance << endl;
            }

    }
    else{
        cout<<"Incorrect Pin"<<endl;
    }

    return 0;
}