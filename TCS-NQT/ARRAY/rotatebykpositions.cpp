//Circular rotation of array by K positions
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"ENTER THE ELEMENTS OF THE ARRAY: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"ENTER THE NUMBER OF POSITIONS TO ROTATE: ";
    cin>>k;
    k = k % n; 
    reverse(arr.begin(), arr.end()); // Reverse the entire array
    reverse(arr.begin(), arr.begin() + k); // Reverse the first k elements
    reverse(arr.begin() + k, arr.end()); // Reverse the remaining n-k elements
    cout<<"ARRAY AFTER ROTATION: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
/*
1 2 3 4 5  k=3
5 4 3 2 1 
3 4 5 2 1 
3 4 5 1 2
*/