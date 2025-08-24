# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //brute force 
    vector<int> ans;
    // ans.push_back(v[0]);
    // for(int i=1;i<n;i++){
    //     if(v[i]!=v[i-1]) ans.push_back(v[i]);
    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }


    // optimized approach
    int j=0;
    for(int i=1;i<n;i++){
        if(v[i]!=v[j]){
            j++;
            v[j]=v[i];
        }
    }
    for(int i=0;i<=j;i++){
        cout<<v[i]<<" ";
    }
}