/*
Given an array of integers, nums, find all unique sets of three numbers [nums[i],nums[j],nums[k]] that add up to zero (nums[i]+nums[j]+nums[k]=0
i!=j!=k, i<j<k). Return the sets in any order.
Example 1
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].

Example 2
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.

Example 3
Input: nums = [0,0,0]
Output: [[0,0,0]]
*/
# include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>nums={-1,0,1,2,-1,-4};

    //brute force approach: Time Complexity: O(n^3) Space Complexity: O(m)
    
    // set<vector<int>> result; // to store unique triplets
    // sort(nums.begin(), nums.end()); // sort the array to handle duplicates easily
    // for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         for(int k=j+1;k<nums.size();k++){
    //             if(nums[i]+nums[j]+nums[k]==0){
    //                 result.insert({nums[i], nums[j], nums[k]});
    //             }
    //         }
    //     }
    // }
    // for (const auto& triplet : result) {
    //     for (int num : triplet) {
    //         cout << num << " ";
    //     } 
    //     cout << endl;
    // }

    //two pointer approach: Time Complexity: O(n^2) Space Complexity: O(m)
    set<vector<int>> result; // to store unique triplets
    sort(nums.begin(), nums.end()); // sort the array to handle duplicates easily
    for(int i=0;i<nums.size();i++){
        int l=i+1, r=nums.size()-1;
        while(l<r){
            int sum=nums[i]+nums[l]+nums[r];
            if(sum==0){
                result.insert({nums[i], nums[l], nums[r]});
                l++;
                r--;
            }
            else if(sum<0) l++;
            else r--;   
            
        }
    }
    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        } 
        cout << endl;
    }
}