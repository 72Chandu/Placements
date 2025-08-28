# include <bits/stdc++.h>
using namespace std;
      string biggerIsGreater(string w) {
    bool isgreater=next_permutation(w.begin(),w.end());
    if(isgreater) return w;
    else return "no answer";
}
int main(){
    // int x;
    // cin>>x;
    // int n=x;
    // int rev=0;   
    // while(n>0){
    //     rev=rev*10+n%10;
    //     n=n/10;
    // }
    // if(rev==x){
    //     cout<<"true"<<endl;
    // }else{
    //     cout<<"false"<<endl;        
    // }

    
    // finding the missing number in an array of size n, where the numbers are from 0 to n-1
    
    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // int total = (n*(n+1)) / 2; 
    // int sum = accumulate(arr.begin(), arr.end(), 0);
    // int missingNumber = total-sum;  
    // cout << "Missing number: " <<missingNumber<< endl;
    
    // m-2: bits manuplation
    // int n;
    // cin >> n;
    // vector<int> arr(n);
    // int xor0toN=0, arrXor=0;
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i]; 
    //     arrXor ^= arr[i]; 
    // }
    // for(int i = 1; i <=n; i++){
    //     xor0toN ^= i;  
    // }
    // cout<<(xor0toN ^ arrXor)<<endl; 


    //
    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // unordered_map<int,int>freq;
    // for(int i=0;i<n;i++){
    //     freq[arr[i]]++;
    // }
    // int count0=freq[0];
    // int count1=freq[1];
    // int count2=freq[2];
    // vector<int> ans;
    // for(int i=0;i<count0;i++){
    //     ans.push_back(0);
    // }
    // for(int i=0;i<count1;i++){
    //     ans.push_back(1);
    // }
    // for(int i=0;i<count2;i++){
    //     ans.push_back(2);
    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    // int c0=0, c1=0, c2=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0) c0++;
    //     else if(arr[i]==1) c1++;
    //     else c2++;
    // }
    // for(int i=0;i<c0;i++){
    //     cout<<0<<" ";
    // }
    // for(int i=0;i<c1;i++){
    //     cout<<1<<" ";
    // }
    // for(int i=0;i<c2;i++){
    //     cout<<2<<" ";
    // }

    //m-1: sort an array of 0s, 1s, and 2s
    // int l=0,m=0,h=n-1;
    // while(m<=h){
    //     if(arr[m]==0){
    //         swap(arr[l], arr[m]);
    //         l++;
    //         m++;
    //     }else if(arr[m]==1){
    //         m++;
    //     }else{
    //         swap(arr[m], arr[h]);
    //         h--;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //positive no->profite made by that day negative no->loss made by that day find the best continuous streek of days where company achieved max profit
    //maimium subarray sum
    // kadane's algorithm
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int profit=0;
    // int currProfit=0;
    // for(int i=0;i<n;i++){
    //     currProfit += arr[i];
    //     if(currProfit < 0) {
    //         currProfit = 0;
    //     }
    //     profit = max(profit, currProfit); 
    // }
    // cout<<profit<<endl;
    /*
    9
    -2 1 -3 4 -1 2 1 -5 4
    o/p=6
    */

    // a=[17,18,5,4,6,1]  o/p=[18,6,6,6,1,-1]

    vector<int>ans;
    int maxRight=-1;
    for(int i=n;i>=0;i--){
        ans.push_back(maxRight);
        maxRight=max(maxRight,arr[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }

    return 0;
}