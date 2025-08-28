#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //brute force 
    // int maxprofit=0;
    // int currprofit=0;
    // for(int i=0;i<n;i++){
    //    int buy=v[i];
    //    for(int j=i+1;j<n;j++){
    //     currprofit=v[j]-buy;
    //     maxprofit=max(currprofit,maxprofit);
    //    }
    // }
    // cout<<maxprofit;

    //optimal

    int minprice=INT_MAX; //buy
    int maxprofit=0;
    for(int i=0;i<n;i++){
        minprice=min(v[i],minprice);
        maxprofit=max(v[i]-minprice,maxprofit);
    }
    cout<<maxprofit;
}