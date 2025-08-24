/*
You are given an array prices, where each element prices[i] represents the price of PrepCoin on the i-th day.
Your task is to determine the maximum profit you can make by selecting one day to buy a PrepCoin and another day after it to sell.
If it’s not possible to make any profit (e.g., prices are decreasing every day), you should return 0. This means you can also choose not to make any transactions.

Input: prices = [10,1,5,6,7,1]
Output: 6
Explanation : Buy prices[1] and sell prices[4], profit = 7 – 1 = 6.

Example 2
Input: prices = [10,8,7,5,2]
Output: 0
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>price={10,1,5,6,7,1};
    int n=price.size();

    //brute force approach: time complexity O(n^2) space complexity O(1)
    
    // int maxprofit=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(price[j]>price[i]){
    //             maxprofit=max(maxprofit,price[j]-price[i]);
    //         }
    //     }
    // }
    // cout<<maxprofit<<endl;

    //2 pointer approach : time complexity O(n) space complexity O(1)
    
    // int l=0;
    // int r=1;
    // maxprofit=0;
    // while(r<n){
    //     if(price[r]>price[l]){
    //         maxprofit=max(maxprofit,price[r]-price[l]);
    //     }else{ 
    //         l=r;
    //     }
    //     r++;
    // }
    // cout<<maxprofit<<endl;

    //dynamic programming approach: time complexity O(n) space complexity O(n)

    vector<int>dp(n,0);
    dp[0]=price[0];
    for(int i=1;i<n;i++){
        dp[i]=min(dp[i-1],price[i]);
    }
    int maxprofit=0;
    for(int i=0;i<n;i++){
        maxprofit=max(maxprofit,price[i]-dp[i]);
    }
    cout<<maxprofit<<endl;
    return 0;
}