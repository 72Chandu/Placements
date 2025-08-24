# include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //brute force
    // int maxlen=0;
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=i;j<n;j++){
    //         sum+=v[j];
    //         if(sum==k){
    //             maxlen=max(j-i+1,maxlen);
    //         }
    //     }
    // }
    // cout<<maxlen;

    //optimise approch
    int l=0, r=0;
    int sum=v[0];
    int maxlen=0;
    while(r<n){
        while(l<=r && sum>k){
            sum-=v[l];
            l++;
        }
        if(sum==k) maxlen=max(maxlen,r-l+1);

        r++;
        if(r<n) sum+=v[r];
    }
    cout<<maxlen;
}