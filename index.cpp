#include <iostream>
using namespace std;

int main() {
    cout << "N: ";
    int n;
    cin >> n;

    int a = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            cout << "*";
        }
        for (int k = 1; k <= i; k++) {
            cout << a;
        
        }
        a++;
        cout << endl;
    }
}