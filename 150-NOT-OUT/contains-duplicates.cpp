/*
Input: nums = [1, 2, 3, 3]
Output: true
*/
# include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={1,2,3,3};
    
    // brute force method
    // Time Complexity: O(n^2)

    // for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]==nums[j]){
    //             cout<<"true"<<endl;
    //             return 0;
    //         }
    //     }
    // }

    //using set
    // Time Complexity: O(n)

    // set<int>s;
    // for(int i=0;i<nums.size();i++){
    //     if(s.find(nums[i])!=s.end()){
    //         cout<<"true"<<endl;
    //         return 0;
    //     }
    //     s.insert(nums[i]);
    // }

    //using unordered set
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    if (unordered_set<int>(nums.begin(), nums.end()).size() < nums.size()) cout << "true" << endl;
    else cout << "false" << endl;
    return 0;
}
