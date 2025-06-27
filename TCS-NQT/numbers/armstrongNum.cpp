#include <bits/stdc++.h>
using namespace std;
int main() {
    string num;
    cout << "ENTER A NUMBER: ";
    cin >> num;
    int n= num.length();
    int lo=0, hi=n-1;
    while(lo<hi){
        if(num[lo] != num[hi]){
            cout << "NOT AN ARMSTRONG NUMBER" << endl;
            return 0;
        }
        lo++;
        hi--;
    }
    cout << "ARMSTRONG NUMBER" << endl;
    return 0;
}