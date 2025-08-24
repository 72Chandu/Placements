#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a1(n),a2(m);

    //m-1 tc=o(n+m)
    // set<int>s;
    // for(int i=0;i<n;i++){
    //     cin>>a1[i];
    //     s.insert(a1[i]);
    // }
    // for(int i=0;i<m;i++){
    //     cin>>a2[i];
    //     s.insert(a2[i]);
    // }
    // for(auto i:s){
    //     cout<<i<<" ";
    // }

    //m2 -> map
    // unordered_map<int,int>map;
    // for(int i=0;i<n;i++){
    //     cin>>a1[i];
    //     map[a1[i]]++;
    // }
    // for(int i=0;i<m;i++){
    //     cin>>a2[i];
    //     map[a2[i]]++;
    // }
    // vector<int>un;
    // for(auto it:map){
    //     un.push_back(it.first);
    // }
    // for(int i=0;i<un.size();i++){
    //     cout<<un[i]<<" ";
    // }


}