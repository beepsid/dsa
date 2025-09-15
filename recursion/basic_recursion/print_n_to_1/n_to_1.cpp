#include <bits./stdc++.h>
using namespace std;

void func(int n){
    if(n==0){
        return;
    }
    printf("%d\n",n);
    func(n-1);
}

int main(){
    int n;
    cout<<"Enter the number from where you want to print: ";
    cin>>n;
    func(n);
}