//Check if one array is a subset of another
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "ENTER THE ELEMENTS OF THE ARRAY: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    int m;
    cout << "ENTER THE NUMBER OF ELEMENTS IN THE 2nd ARRAY: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "ENTER THE 2nd ARRAY: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    unordered_set<int> set1(arr1.begin(), arr1.end());
    bool isSubset = true;
    for (int i = 0; i < m; i++) {
        if (set1.find(arr2[i]) == set1.end()) {
            isSubset = false;
            break;
        }
    }
    if (isSubset) {
        cout << "The second array is a subset of the first array." << endl;
    } else {
        cout << "The second array is not a subset of the first array." << endl;
    }
    return 0;
}