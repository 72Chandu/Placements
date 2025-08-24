#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,k;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin>>n;
    cout<<"ENTER THE k: ";
    cin>>k;
    vector<int>arr(n);
    cout<<"ENTER THE ELEMENTS OF THE ARRAY: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    k=k%n;
    while(k--){
        int temp=arr[n-1];
        arr.insert(arr.begin(),temp);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}