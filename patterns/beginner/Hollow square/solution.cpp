#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=0; i<n; i++){
        if(i==0 || i==n-1){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int j=0;j<n-2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern(n);
    return 0;
}