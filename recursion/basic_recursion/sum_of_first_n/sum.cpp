#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

int main(){
    int n;
    cout<<"Enter the number till you want sum: ";
    cin>>n;
    printf("%d", sum(n));
}