#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lo=0, hi=n-1;
    while(lo<hi){
        swap(arr[lo], arr[hi]);
        lo++;
        hi--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
}
    return 0;
}