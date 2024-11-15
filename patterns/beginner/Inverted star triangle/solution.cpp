#include <iostream>
#include <string.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i<n; ++i){
        cout << string(i, ' ') << string(n-i, '*') << endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern(n);
    return 0;
}