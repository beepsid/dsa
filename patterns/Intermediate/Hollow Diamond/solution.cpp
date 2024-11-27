#include <iostream>
using namespace std;

void hollow_diamond(int n){
    if(n%2==0){
        n++;
    }
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            if(i<n/2){
                if(j==(n/2)-i || j==(n/2)+i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(j==i-(n/2) || j==n-i+(n/2)-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    hollow_diamond(n);
    return 0;
}