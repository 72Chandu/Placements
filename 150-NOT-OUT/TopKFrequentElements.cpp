/*
Example 1
Input: nums = [1,2,2,3,3,3], k = 2

Output: [2,3]
Example 2
Input: nums = [7,7], k = 1

Output: [7]
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={1,2,2,3,3,3};
    int k=2;

    // Time Complexity: O(nlogn) where n is the number of elements in nums
    // Space Complexity: O(n) for storing the frequency map

    if(k <= 0 || nums.empty()) {
        cout << "Invalid input" << endl;
        return 0;
    }

    // unordered_map<int, int> frequencyMap; // number->frequency
    // for(int num : nums){
    //     frequencyMap[num]++;
    // }
    // vector<pair<int,int>> arr;
    // for(const auto&ele:frequencyMap){
    //     arr.push_back({ele.second, ele.first});
    // }
    // sort(arr.rbegin(),arr.rend()); // Sort by frequency in descending order
    // vector<int> topKElements; // to store the top k frequent elements
    // for(int i=0; i<k && i<arr.size(); i++){
    //     topKElements.push_back(arr[i].second);
    // }
    // for(const int& ele:topKElements){
    //     cout << ele << " ";
    // }



    // Using a min-heap to find the top k frequent elements
    // Time Complexity: O(n log k) where n is the number of elements in nums
    // Space Complexity: O(n+k) for storing the frequency map and the heap

    // unordered_map<int, int> frequencyMap; // number->frequency
    // for(int num : nums){
    //     frequencyMap[num]++;
    // }
    // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap; // Min-heap
    // for(const auto& ele : frequencyMap){
    //     minHeap.push({ele.second, ele.first});
    //     if(minHeap.size() > k) {
    //         minHeap.pop(); // Maintain only the top k elements
    //     }
    // }
    // vector<int> topKElements; //store top k frequent elements
    // while(!minHeap.empty()){
    //     topKElements.push_back(minHeap.top().second);
    //     minHeap.pop();
    // }
    // for(const int& ele : topKElements){
    //     cout << ele << " ";
    // }


    
    //using bucket sort
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    unordered_map<int,int> count; // number->frequency
    vector<int> bucket[nums.size() + 1]; // Buckets for frequencies
    for(int num : nums){
        count[num]++;
    }
    for(const auto& ele : count){
        bucket[ele.second].push_back(ele.first);
    }
    vector<int> result;
    for(int i = nums.size(); i > 0 && result.size() < k; i--) {
        for(int num : bucket[i]) {
            result.push_back(num);
            if(result.size() == k) break; // Stop when we have k elements
        }
    }
    for(const int& ele : result){
        cout << ele << " ";
    }
    return 0;
}