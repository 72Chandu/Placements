//The equilibrium index of an array is an index such that the sum of all elements at lower indexes equals the sum of all elements at higher indexes.
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
    for(int i=0;i<n;i++){
        int leftsum=0;
        for(int j=0;j<i;j++){
            leftsum+=arr[j];
        }
        int rightsum=0;
        for(int j=i+1;j<n;j++){
            rightsum+=arr[j];
        }
        if(leftsum==rightsum){
            cout<<"The equilibrium index is: "<<i<<endl;
            return 0;
        }
    }
    cout<<"There is no equilibrium index in the array."<<endl;
}
/*
Input: arr[] = [1, 2, 0, 3]
Output: 2
Explanation: The sum of left of index 2 is 1 + 2 = 3 and sum on right of index 2 is 3.

Input: arr[] = [1, 1, 1, 1]
Output: -1 
Explanation: There is no equilibrium index in the array.

Input: arr[] = [-7, 1, 5, 2, -4, 3, 0]
Output: 3
Explanation: The sum of left of index 3 is -7 + 1 + 5 = -1 and sum on right of index 3 is -4 + 3 + 0 = -1.
*/