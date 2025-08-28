//Find the elements that appears more than N/3 times in the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int>ans;
    for(int i=0;i<n;i++){
        int cnt=1;
        if(ans.size()==0 || ans[0]!=v[i]){
            for(int j=i+1;j<n;j++){
            if(v[i]==v[j]) cnt++;
        }
        }
        if(cnt>n/3) ans.push_back(v[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



    // unordered_map<int,int>m;
    // for(int i=0;i<n;i++){
    //     m[v[i]]++;
    // }
    // for(auto el:m){
    //     if(el.second>n/3){
    //         cout<<el.first<<" ";
    //     }
    // }

}