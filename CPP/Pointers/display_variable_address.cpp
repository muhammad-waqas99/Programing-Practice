#include <iostream>
using namespace std;
int main(){

    int a ;
    cout<< "Enter the Number : ";
    cin>>a; 



    int* ptr = &a;

    cout<<"The Memory Address of given number is : "<<*ptr;
}