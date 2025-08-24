# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //brute force
    // int cnt=0;
    // vector<int>res;
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=0){
    //         res.push_back(arr[i]);
    //     }else{
    //         cnt++;
    //     }
    // }
    // for(int i=0;i<cnt;i++){
    //     res.push_back(0);
    // }
    // for(int i=0;i<n;i++){
    //     cout<<res[i]<<" ";
    // }


    //optimal 2 pointer
    int f=0, s=0;
    while(s<n){
        if(arr[s]!=0){
            swap(arr[f],arr[s]);
            f++;
        }
        s++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}