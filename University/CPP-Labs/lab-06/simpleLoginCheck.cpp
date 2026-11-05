#include<iostream>
using namespace std;

int main(){
    int username, password;
    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    if(username == 888 && password == 999)
    {
        cout << "Access Granted";
    }
    else
    {
        cout << "Access Denied";
    }

    return 0;
}