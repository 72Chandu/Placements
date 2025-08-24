# include<bits/stdc++.h>
using namespace std;
int main(){
    int n , target;
    cin>>n>>target;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    

    //brute force
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(v[i]+v[j]==target){
    //             cout<<i<<" "<<j;
    //             return 0;
    //         }
    //     }
    // }
    // cout<<-1<<" "<<-1;

    //m-2 - 2 pointer tc=o(n) but index is not true in this case
    // sort(v.begin(),v.end());
    // int lo=0, hi=n;
    // while(lo<hi){
    //     if(v[lo]+v[hi]==target){
    //         cout<<lo<<" "<<hi;
    //         return 0;
    //     }else if(v[lo]+v[hi]>target){
    //         hi--;
    //     }else{
    //         lo++;
    //     }
    // }
    // cout<<-1<<" "<<-1;


    //m-3 -tc= o(n)
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[v[i]]=i;
    }
    for(auto el:m){
        int nextele=target-el.first;
        if(m.find(nextele)!=m.end()){
            cout<<el.second<<" "<<m[nextele];
            return 0;
        }
    }
    cout<<-1<<" "<<-1;


}