#include<iostream>
using namespace std;
int main(){
    float marks1, marks2 , marks3;
    float total , average ;
    cout<<"Enter marks of first subject : ";
    cin>>marks1;
    cout<<"Enter marks of second  subject : ";
    cin>>marks2;
    cout<<"Enter marks of third subject : ";
    cin>>marks3;

    total = marks1 + marks2 + marks3;
    average = total/3;

    cout<< "Total Marks : "<<total<<endl;
    cout<<"Average Marks : "<<average;
    return 0;

}