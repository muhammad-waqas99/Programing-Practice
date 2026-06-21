#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbers of row :";
    cin>>n;

    for(int i= 1; i<=n ; i++){
        for (int j = 1; j<=i ; j++)
        {
           if(i%2!=0){
            cout<<j;
           }
           else{
            char ch = j+64;
            cout<<ch;
           }
        }
        cout<<endl;
    }

    return 0;
}