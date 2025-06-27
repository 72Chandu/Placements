#include <bits/stdc++.h>
using namespace std;
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int n;
    cout << "ENTER THE NUMBER: ";
    cin >> n;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    cout << "FACTORIAL OF " << n << " IS: " << factorial(n) << endl;
    return 0;
}