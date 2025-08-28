#include<bits/stdc++.h>
using namespace std;
// bool findnextele(vector<int>&a,int ele){
//     for(int i=0;i<a.size();i++){
//         if(a[i]==ele) return true;
//     }
//     return false;
// }
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // m-1: 
    // int longest=1;
    // for(int i=0;i<n;i++){
    //     int x=arr[i];
    //     int cnt=1;
    //     while(findnextele(arr,x+1)==true){
    //         x+=1;//next elem to be find
    //         cnt++;
    //     }
    //     longest=max(longest,cnt);
    // }
    // cout<<longest;


    //optimal
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int longest=1;
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt=cnt+1;
            }
            longest=max(longest,cnt);
        }
    }
    cout<<longest;
    
}