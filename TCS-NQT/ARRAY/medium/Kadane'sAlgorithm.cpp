# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n); 
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    //brute force
    // int maxsum=INT_MIN;
    // for(int i=0;i<n;i++){
    //    int currsum=0;
    //    for(int j=i;j<n;j++){
    //     currsum+=v[j];
    //     maxsum=max(currsum,maxsum);
    //    }
    // }
    // cout<<maxsum;

    //optimise 
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum+=v[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(currsum,maxsum);
    }
    cout<<maxsum;

}