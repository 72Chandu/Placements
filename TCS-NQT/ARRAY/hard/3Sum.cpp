#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // set<vector<int>>st;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k=j+1;k<n;k++){
    //             if(v[i]+v[j]+v[k]==0){
    //                 vector<int>temp={v[i],v[j],v[k]};
    //                 sort(temp.begin(), temp.end());
    //                 st.insert(temp);
    //             }
    //         }
    //     }
    // }
    //  vector<vector<int>> ans(st.begin(), st.end());
    // for (auto it : ans) {
    //     cout << "[";
    //     for (auto i : it) {
    //         cout << i << " ";
    //     }
    //     cout << "] ";
    // }

   //optimal
   sort(v.begin(),v.end());
   vector<vector<int>>ans;
   for(int i=0;i<n;i++){
    if(i!=0 && v[i]==v[i-1]) continue;
    int j=i+1;
    int k=n-1;
    while(j<k){
        int sum=v[i]+v[j]+v[k];
        if(sum<0) j++;
        else if(sum>0) k--;
        else{
            ans.push_back({v[i],v[j],v[k]});
            j++;
            k--;
            while(j<k && v[j]==v[j-1])j++;
            while(j<k && v[k]==v[k+1])k--;
        }
    }
   }
   for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }


}