#include <iostream>
#include <string>
using namespace std;

void staircase(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << string(n - i, ' ') << string(i, '#') << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;
    staircase(n);
    return 0;
}
