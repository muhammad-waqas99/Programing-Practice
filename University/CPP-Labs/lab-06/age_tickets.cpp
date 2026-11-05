#include<iostream>
using namespace std;
int main(){
    int age;

    cout<<"Enter Your Age: ";
    cin>>age;

    if(age<5)
    {
        cout<< "Ticket Price: Free";
    }
    else if(age>=5 && age<=12){
        cout << "Ticket Price: Rs. 100";
    }
    else if(age >= 13 && age<=59)
    {
        cout<<"Ticket Price: Rs. 300";
    }
    else{
        cout<<"Ticket Price: rs. 150";
    }
    return 0;
}