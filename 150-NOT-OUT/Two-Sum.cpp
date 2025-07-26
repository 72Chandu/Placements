/*
Input: nums = [3,4,5,6], target = 7
Output: [0,1]
Explanation: nums[0] + nums[1] == 7, so we return [0, 1].

Example 2
Input: nums = [4,5,6], target = 10
Output: [0,2]
*/
# include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={3,4,5,6};
    int target=7;

    // brute force method
    // Time Complexity: O(n^2)

    // for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]+nums[j]==target){             
    //             cout << "[" << i<< "," << j << "]" << endl;
    //             return 0;
    //         }
    //     }
    // }

    //using sorting and two pointers
    // Time Complexity: O(n log n)
    // Space Complexity: O(1)

    // sort(nums.begin(), nums.end());
    // int left = 0, right = nums.size() - 1;
    // while (left < right) {
    //     int sum = nums[left] + nums[right];
    //     if (sum == target) {
    //         cout << "[" << left << "," << right << "]" << endl;
    //         return 0;
    //     } else if (sum < target) {
    //         left++;
    //     } else {
    //         right--;
    //     }
    // }

    //using unordered map
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    unordered_map<int,int>m;
    for(int i=0;i<nums.size();i++){
        int diff=target-nums[i];
        if(m.find(diff)!=m.end()){
            cout << "[" << m[diff] << "," << i << "]" << endl;
            return 0;
        } else {
            m[nums[i]] = i; // Store the index of the current number
        }
    }
    
}