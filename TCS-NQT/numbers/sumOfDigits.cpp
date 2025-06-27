#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "ENTER THE NUMBER: ";
    cin >> n;
    if (n < 0) {
        cout << "INVALID INPUT" << endl;
        return 1;
    }
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;      
    }
    cout << "SUM OF DIGITS: " << sum << endl;

    return 0;
}