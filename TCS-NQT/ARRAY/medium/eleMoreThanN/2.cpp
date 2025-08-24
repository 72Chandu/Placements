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

    // for(int i=0;i<n;i++){
    //     int count=1;
    //     for(int j=i+1;j<n;j++){
    //         if(v[i]==v[j]){
    //             count++;
    //         }
    //     }
    //      if(count>ceil(n/2)){
    //         cout<<v[i];
    //         return 0;
    //     }
    // }

    // insertion -> O(n), check-> O(n)

    unordered_map<int,int>m;
    for(auto el:v){
        m[el]++;
    }
    for(auto el:m){
        if(el.second>ceil(n/2)){
            cout<<el.first;
        }
    }

    // optimise
    return 0;

}