#include<iostream>
using namespace std;
int main(){
    int price , quantity;
    cout<<"Enter Price of Product : ";
    cin>>price;
    cout<<"Enter Quantity of Product : ";
    cin>>quantity;
    int totalCost = price*quantity;
    cout<<"Total Cost : "<<totalCost;
    return 0;
}