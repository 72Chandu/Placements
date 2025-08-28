#include<bits/stdc++.h>
using namespace std;
int nCr(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int generatePascalTriangle(int r, int c){
    int ele=nCr(r-1,c-1);
    return ele;
}
int main(){
    // int n;
    // cin>>n;
    // vector<vector<int>>v(n,vector<int>(n));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         if(j==0 || i==j){
    //             v[i][j]=1;
    //         }
    //         else{
    //             v[i][j]=v[i-1][j-1]+v[i-1][j];
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<v[i][j];
    //     }
    //     cout<<endl;
    // }
    

//Variation 1: Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.

    int r, c;
    cin>>r>>c;
    int ele=generatePascalTriangle(r,c);
    cout<<"the element at position (r,c) is:"<<ele<<endl;
// Variation 2: Given the row number n. Print the n-th row of Pascal’s triangle.
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<nCr(n-1,i-1);
    }
// Variation 3: Given the number of rows n. Print the first n rows of Pascal’s triangle

return 0;
}