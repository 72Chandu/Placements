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
    int result=arr[0];
    for(int i=0;i<n;i++){
        int mul=1;
        for(int j=i;j<n;j++){
            mul*=arr[j];
            result=max(result,mul);
        }
    }
    cout<<"THE MAXIMUM PRODUCT SUBARRAY IS: "<<result<<endl;
    return 0;
}
/*
nput: arr[] = {-2, 6, -3, -10, 0, 2}
Output: 180
Explanation: The subarray with maximum product is {6, -3, -10} with product = 6 * (-3) * (-10) = 180

Input: arr[] = {-1, -3, -10, 0, 60}
Output: 60
Explanation: The subarray with maximum product is {60}.
*/