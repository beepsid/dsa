#include <bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i>n){
        return;
    }
    printf("%d\n", i);
    print(i+1,n);
}

int main(){
    int n;
    cout<<"Enter the number till you want to print: ";
    cin>>n;
    print(1,n);
    return 0;
}
