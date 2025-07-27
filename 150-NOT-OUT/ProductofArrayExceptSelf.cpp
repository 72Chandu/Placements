/*
Example 1
Input: nums = [1,2,4,6]

Output: [48,24,12,8]
Example 2
Input: nums = [-1,0,1,2,3]

Output: [0,-6,0,0,0]
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={1,2,4,6};

    vector<int> result(nums.size(), 1);
    int n = nums.size();

    //brute force approach
    // Time Complexity: O(n^2) where n is the number of elements in nums
    // Space Complexity: O(n) for the result array

    // for(int i=0;i<n;i++){
    //     int prod=1;
    //     for(int j=0;j<n;j++){
    //         if(i!=j){
    //             prod *= nums[j];
    //         }
    //     }
    //     result[i] = prod;
    // }
    // for(const int& ele : result) {
    //     cout << ele << " ";
    // }



    // Time Complexity: O(n) for calculating the prefix and suffix products
    // Space Complexity: O(1) for the result array (excluding input and output)

    // Calculate prefix products

    for(int i = 1; i < n; i++) {
        result[i] = result[i - 1] * nums[i - 1];
    }
    int suffixProduct = 1; // Calculate suffix products and multiply with prefix products
    for(int i = n - 2; i >= 0; i--) {
        suffixProduct *= nums[i + 1];
        result[i] *= suffixProduct;
    }
    for(const int& ele : result) {
        cout << ele << " ";
    }
    return 0;
}