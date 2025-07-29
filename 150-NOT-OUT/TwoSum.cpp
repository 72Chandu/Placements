/*
Example 1
Array: [1, 2, 4, 6, 10]
Target: 8
Explanation:
Now check:
1 + 2 = 3 ❌
2 + 4 = 6 ❌
2 + 6 = 8 ✅ → This is a valid pair!
So, the answer is: [2, 6]

Key Points:
The value at index1 should appear before the value at index2 in the array.
The array is already sorted, so we can solve it quickly using the two-pointer technique.
We don’t need to check all possible pairs (which takes more time).
*/
# include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1, 2, 4, 6, 10};
    int target = 8;

    // Two-pointer approach: Time Complexity: O(n) Space Complexity: O(1)
    int l=0 ,r= arr.size()-1;
    while(l<r){
        int sum=arr[l]+arr[r];
        if(sum==target){
            cout<<l+1<<" "<<r+1<<endl;
            return 0;
        }
        else if(sum<target) l++;
        else r--;
    }
}