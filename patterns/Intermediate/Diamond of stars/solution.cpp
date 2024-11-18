#include <iostream>
using namespace std;

void pattern(int n, int a){
    for(int i=1; i<a+1; i++){
        for(int j=a; j>i; j--){
            cout<<" ";
        }
        for(int k=1; k<i*2;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=a-1;i>0;i--){
        for(int j=a; j>i;j--){
            cout<<(" ");
        }
        for(int k=1; k<i*2;k++){
            cout<<("*");
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int a = n / 2 + 1;
    pattern(n,a);
    return 0;
}