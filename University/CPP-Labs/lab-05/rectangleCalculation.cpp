#include<iostream>
using namespace std;
int main(){
    double length,width;
    cout<<"Enter Length of Triangle : ";
    cin>>length;
    cout<<"Enter Width of Triangle : ";
    cin>>width;
    double area = length *width;
    double perimeter = 2 * (length + width);

    cout<<"Area of Rectangle is : "<<area<<endl;
    cout<<"Perimeter of Rectangle is : "<<perimeter;




}