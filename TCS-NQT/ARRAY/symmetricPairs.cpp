#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin>>n;
    vector<vector<int>>arr(n, vector<int>(2));
    cout<<"ENTER THE ELEMENTS OF THE ARRAY: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<int>>result;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2;j++){
    //         if (arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]) {
    //             result.push_back(arr[i]);
    //         }
    //     }
    // }

    //methode - 2
    vector<vector<int>>result2;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int first = arr[i][0];
        int second = arr[i][1];
        if(mp.find(second) != mp.end() && mp[second] == first) {
            result2.push_back({first, second});
        } else {
            mp[first] = second;
        }
    }
    cout<<"Symmetric Pairs are: ";
    // for(auto &pair : result) {
    //     cout << "[" << pair[0] << ", " << pair[1] << "] ";
    // }
    for(auto &pair : result2) {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }

} 
/*
Input: arr[] = [[10, 20], [30, 40], [20, 10], [50, 60]]
Output: [10, 20] 

10->20
30->40
20->10
50->60
*/