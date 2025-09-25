#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    cout<<"The reversed array is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void reversed(int arr[], int start , int end){
    if(start<end){
        swap(arr[start], arr[end]);
        reversed(arr, start+1, end-1);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reversed(arr, 0, n-1);
    printarray(arr, n);
}