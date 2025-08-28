# include<bits/stdc++.h>
using namespace std;
void makeRow(vector<vector<int>>&mt,int n, int m, int row){
    for(int i=0;i<n;i++){
        if(mt[row][i]!=0){
            mt[row][i]=-1;
        }
    }
}
void makecol(vector<vector<int>>&mt,int n, int m, int col){
    for(int i=0;i<n;i++){
        if(mt[i][col]!=0){
            mt[i][col]=-1;
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }

    //brute force
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==0){
                makeRow(v,n,m,i);
                makecol(v,n,m,j);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==-1){
                v[i][j]=0;
            }
        }
    }
    for(auto it:v){
        for(auto ele:it){
            cout<<ele<<" ";
        }
    }
    
}