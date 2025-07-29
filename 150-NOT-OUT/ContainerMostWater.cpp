/*
You are given an array heights, where each element heights[i] represents the height of a 
vertical bar at position i. Your task is to select any two bars to form a container, 
with the width of the container being the distance between the two bars.

The goal is to find the maximum amount of water that this container can hold. 
Return the largest possible value of water that can be stored.

Example 1
Input: height = [1,7,2,5,4,7,3,6]
Output: 36
Example 2
Input: height = [2,2,2]
Output: 4
*/
# include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>height={1,7,2,5,4,7,3,6};

    //brute force approach: Time Complexity: O(n^2) Space Complexity: O(1)
    
    // int mxWater = 0;
    // for(int i=0;i<height.size();i++){
    //     for(int j=i+1;j<height.size();j++){
    //         int width=j-i;
    //         int minHeight=min(height[i],height[j]);
    //         mxWater=max(mxWater,width*minHeight);
    //     }
    // }
    // cout<<mxWater<<endl;


    //two pointer approach: Time Complexity: O(n) Space Complexity: O(1)
    int l=0 ,r=height.size()-1;
    int mxWater = 0;
    while(l<r){
        int w=r-l;
        int minh=min(height[l],height[r]);
        mxWater=max(mxWater,w*minh);
        if(height[l]<height[r]) l++;
        else r--;
    }
    cout<<mxWater<<endl;
    return 0;
}