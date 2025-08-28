# include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vector<int>ans;
    int top=0, left=0,bottom=n-1,right=m-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(v[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(v[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(v[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(v[i][left]);
            }
            left++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" "; 
    }
}