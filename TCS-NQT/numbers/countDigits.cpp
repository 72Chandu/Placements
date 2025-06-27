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
    int count = 0;
    if (n == 0) {
        count = 1;
    } else {
        while (n > 0) {
            n /= 10;
            count++; 
        }
    }
    cout << "NUMBER OF DIGITS: " << count << endl;
    return 0;
}