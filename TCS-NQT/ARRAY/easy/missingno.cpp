# include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // int total = (n*(n+1)) / 2; 
    // int sum = accumulate(arr.begin(), arr.end(), 0);
    // int missingNumber = total-sum;  
    // cout << "Missing number: " <<missingNumber<< endl;
    
    // m-2: bits manuplation
    int n;
    cin >> n;
    vector<int> arr(n);
    int xor0toN=0, arrXor=0;
    for(int i = 0; i < n; i++){
        cin >> arr[i]; 
        arrXor ^= arr[i]; 
    }
    for(int i = 1; i <=n; i++){
        xor0toN ^= i;  
    }
    cout<<(xor0toN ^ arrXor)<<endl; 

}