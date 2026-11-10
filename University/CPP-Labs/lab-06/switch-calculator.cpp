#include<iostream>
using namespace std;
int main(){
    int a , b ;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    char op;
    cout<<"Enter Operator + , - , * , / , % : ";
    cin>>op;

    switch (op)
    {
    case '+':
         cout<<"Addition : "<<a+b<<endl;
       
         break;
    case '-':
         cout<<"Subtraction : "<<a-b<<endl;
       
         break;
    case '*':
         cout<<"Multiplication : "<<a*b<<endl;
       
         break;
    case '/':
         if(b != 0)
                cout << "Division: " << (double)a/b << endl;
            else
                cout << "Error: Division by zero!";
       
         break;
    case '%':
            if(b != 0)
                cout << "Remainder: " << a%b << endl;
            else
                cout << "Error: Modulus by zero!";
       
         break;
    
    default:
        cout<<"Invalid Operator :";
        break;
    }

    return 0;
}