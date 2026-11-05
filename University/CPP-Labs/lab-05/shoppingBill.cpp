#include<iostream>
using namespace std;
int main(){
    float product1 , product2 , product3 , product4 ;
    float total ;
    cout<<"Enter the price of first Product : ";
    cin>>product1;
    cout<<"Enter the price of second Product : ";
    cin>>product2;
    cout<<"Enter the price of third Product : ";
    cin>>product3;
    cout<<"Enter the price of fourth Product : ";
    cin>>product4;


    total = product1 + product2 + product3 + product4;

    cout<<"Price of First Product : "<<product1<<endl;
    cout<<"Price of Second Product : "<<product2<<endl;
    cout<<"Price of Third Product : "<<product3<<endl;
    cout<<"Price of Fourth Product : "<<product4<<endl;

    cout<<"Total Price : "<<total;
}