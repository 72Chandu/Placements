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

    //brute force
    // vector<vector<int>>rotated(n,vector<int>(n, 0));
    // for (int i=0;i<n;i++){
    //     for (int j=0;j<n;j++) {
    //          rotated[j][n-i-1]=v[i][j];
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<rotated[i][j]<<" ";
    //     }
    // }

    //optimal

    //transposing the matrix
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            swap(v[i][j], v[j][i]);
        }
    }
    //reversing each row of the matrix
    for (int i=0;i<n;i++) {
        reverse(v[i].begin(), v[i].end());
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
    }
}