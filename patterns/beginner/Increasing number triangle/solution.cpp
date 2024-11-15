#include <iostream>
using namespace std;

void nNumberTriangle(int n) {
    int k=1;
    for(int i=1; i<n+1;i++){
        for(int j=0; j<i; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n; 
    nNumberTriangle(n); 
    return 0;
}
