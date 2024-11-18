#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=1; i<n+1; i++){
        for (int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=i; k<n+1; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }  

    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=i;k<n+1;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number for rows: ";
    cin>>n;
    pattern(n);
    return 0;
}