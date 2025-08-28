# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    next_permutation(v.begin(),v.begin()+n);
    cout<<v[0]<<" "<<v[1]<<" "<<v[2];
    return 0;
}