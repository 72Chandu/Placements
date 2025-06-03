//Sort an array according to the order defined by another array
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin >> n;
    vector<int> arr(n);
    cout << "ENTER THE ELEMENTS OF THE ARRAY: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m;
    cout << "ENTER THE NUMBER OF ELEMENTS IN THE ORDER ARRAY: ";
    cin >> m;
    vector<int> order(m);
    cout << "ENTER THE ORDER ARRAY: ";
    for (int i = 0; i < m; i++) {
        cin >> order[i];
    }
    map<int, int> mp;
    for (int i = 0; i < m; i++) {
        mp[order[i]] = i;
    }
    sort(arr.begin(), arr.end(), [&](int a, int b) {
        bool a_in_order = mp.find(a) != mp.end();
        bool b_in_order = mp.find(b) != mp.end();
        if (a_in_order && b_in_order) {
            return mp[a] < mp[b];
        } else if (a_in_order) {
            return true;
        } else if (b_in_order) {
            return false;
        } else {
            return a < b;  // default ascending order
        }
    });
    cout << "SORTED ARRAY: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

/*
Input: arr1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
arr2[] = {2, 1, 8, 3}
Output: arr1[] = {2, 2, 1, 1, 8, 8, 3, 5, 6, 7, 9}

Input: arr1[] = {4, 5, 1, 1, 3, 2}
arr2[] = {3, 1}
Output: arr1[] = {3, 1, 1, 2, 4, 5}
*/