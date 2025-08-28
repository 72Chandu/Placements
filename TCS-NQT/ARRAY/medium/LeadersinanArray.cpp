# include<bits/stdc++.h>
using namespace std;
// A Leader is an element that is greater than all of the elements on its right side in the array
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // //brute force
    // vector<int>leader;
    // for(int i=0;i<n;i++){
    //     int lead=arr[i];
    //     bool flage=true;
    //     for(int j=i+1;j<n;j++){
    //         if(lead<arr[j]) flage=false;
    //     }
    //     if(flage) leader.push_back(lead);
    // }
    

    //optimal : 4 7 1 0

    vector<int>leader;
    int max=arr[n-1];
    leader.push_back(max); //0
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            leader.push_back(arr[i]);
            max=arr[i]; //1
        }
    }
    for(int i=0;i<leader.size();i++){
        cout<<leader[i]<<" ";
    }
    return 0;
}