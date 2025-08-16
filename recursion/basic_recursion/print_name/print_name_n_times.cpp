#include <iostream>
#include <string>

using namespace std;

void rec(int i, int n, string name){
    if(i > n){
        return;
    }
    cout << name << endl;
    rec(i + 1, n, name);
}

int main(){
    int n;
    string name;
    cout << "Enter number of times: ";
    cin >> n;
    cout << "Enter name: ";
    cin >> name;
    rec(1, n, name);
    return 0;
}