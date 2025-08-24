/*
Example 1:
Input Format: arr[] = {2,2,1}
Result: 1
Explanation: In this array, only the element 1 appear once and so it is the answer.

Example 2:
Input Format: arr[] = {4,1,2,1,2}
Result: 4
Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.
*/
# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    
    //m-1
    // unordered_map<int,int>m;
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    //     m[v[i]]++;
    // }
    // for(auto it:m){
    //     if(it.second==1){
    //         cout<<it.first;
            
    //     }
    // }

    //m-2 ->optimise using bit manupulation
    //a^a=0 a^0=a

    int ans=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        ans^=v[i];
    }
    cout<<ans;


}