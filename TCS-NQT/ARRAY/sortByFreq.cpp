//the frequency of elements, i.e. elements that have higher frequency comes first. If the frequencies of two elements are the same, then the smaller number comes first.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"ENTER THE ELEMENTS OF THE ARRAY: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int, int> freqMap;
    for(int i=0; i<n; i++){
        freqMap[arr[i]]++;
    }
    vector<pair<int, int>> freqVec(freqMap.begin(), freqMap.end());
    sort(freqVec.begin(), freqVec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if(a.second == b.second) {
            return a.first < b.first; // Sort by value if frequencies are equal
        }
        return a.second > b.second; // Sort by frequency in descending order
    });
    vector<int> sortedArr;
    for(const auto& p : freqVec) {
        sortedArr.insert(sortedArr.end(), p.second, p.first); // Insert 'value' 'frequency' times
    }
    cout << "ARRAY SORTED BY FREQUENCY: \n";
    for(int i=0; i<sortedArr.size(); i++){
        cout << sortedArr[i] << " ";
    }
}
/*
Input: arr[] = [5, 5, 4, 6, 4]
Output: [4, 4, 5, 5, 6]

nput: arr[] = [9, 9, 9, 2, 5]
Output: [9, 9, 9, 2, 5]
*/