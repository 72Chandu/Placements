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
    sort(arr,arr+n);
    double median=0;
    if(n%2==0){
        median =(arr[n/2-1]+arr[n/2])/2.0;
    }else{
        median=arr[n/2]/2.0;
    }
    cout<<"THE MEDIAN OF THE ARRAY IS: "<<median<<endl;
    return 0;
}