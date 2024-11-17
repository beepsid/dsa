#include <iostream>
using namespace std;

void pattern(int n){
    for(int i=0; i<n+1; i++){
        for(int j=0; j<(n-i); j++){
            cout<<" ";
        }
        for(int k=1; k<(i*2); k++){
            cout<<("*");
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