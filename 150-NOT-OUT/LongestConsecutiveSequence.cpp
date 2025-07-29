/*
Example 1
Input: nums = [2,20,4,10,3,4,5]
Output: 4
Example 2
Input: nums = [0,3,2,5,4,6,1,1]
Output: 7
A consecutive sequence is a sequence of elements in which each element is exactly 1 greater than the previous element.
*/
# include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {0,3,2,5,4,6,1,1};

    
    if(nums.size() == 0){
        cout << 0 << endl;
        return 0;
    }

    // brute force approach: Time Complexity: O(n^2) Space Complexity: O(n)
    // unordered_set<int>set(nums.begin(),nums.end());
    // int maxCount = 0;
    // for(int num:nums){
    //     int curr=num , count=0;
    //     while(set.find(curr)!=set.end()){
    //         set.erase(curr); // to avoid counting the same number again
    //         curr++;
    //         count++;
    //     }
    //     maxCount = max(maxCount, count);
    // }
    // cout << maxCount << endl;   
    

    // optimal approach : Time Complexity: O(n)  Space Complexity: O(n)
    unordered_set<int>set(nums.begin(),nums.end());
    int maxCount = 0;
    for(int num:set){
        if(set.find(num-1)==set.end()){
            int curr=num, count=1;
            while(set.find(curr+1)!=set.end()){
                curr++;
                count++;
            }
            maxCount = max(maxCount, count);
        }
    }
    cout << maxCount << endl;
}