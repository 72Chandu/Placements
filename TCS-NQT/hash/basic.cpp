#include<bits/stdc++.h>
using namespace std;
int main(){

    //number hashing

    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int hash[13]={0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]+=1;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     int num;
    //     cin>>num;
    //     cout<<hash[num]<<endl;
    // }

    // charcter hasing

    // string s;
    // cin>>s;
    // int hash[26]={0};
    // for(int i=0;i<s.length();i++){
    //     hash[s[i]-'a']+=1;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     char c;
    //     cin>>c;
    //     cout<<hash[c-'a']<<endl;
    // }   

    // string s;
    // cin>>s;
    // int hash[256]={0};
    // for(int i=0;i<s.length();i++){
    //     hash[s[i]]++;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     char c;
    //     cin>>c;
    //     cout<<hash[c]<<endl;
    // }  

    // hasing large numbers
    
    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // map<int,int>m;
    // for(int i=0;i<n;i++){
    //     m[arr[i]]++;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     int num;
    //     cin>>num;
    //     cout<<m[num]<<endl;
    // }

    // highest occuring element in array

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<int, int> m;
    for(auto x:arr) {
        m[x]++;
    }
    int max_feq_ele=INT_MIN;
    for(auto x:m){
        if(x.second>max_feq_ele) {
            max_feq_ele = x.second;
        }
    }
    cout << max_feq_ele << endl;
    return 0;
}