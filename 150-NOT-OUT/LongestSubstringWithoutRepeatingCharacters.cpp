/*
find the length of the longest substring that contains only unique characters
continuous block of characters  and maintain the original order of characters.
For example, in the string “abcabcbb”, the longest substring without repeating characters is “abc”, which has a length of 3.

Example 1
Input: s = "zxyzxyz"
Output: 3
Explanation : The string “xyz” is the longest without duplicate characters.

Example 2
Input: s = "xxxx"
Output: 1

| i | s\[i] | start | charIndexMap      | Action                                                      | maxlen                       |
| - | ----- | ----- | ----------------- | ----------------------------------------------------------- | ---------------------------- |
| 0 | z     | 0     | `{}`              | z not in map → store `z:0`                                  | `maxlen = max(0, 0-0+1) = 1` |
| 1 | x     | 0     | `{z:0}`           | x not in map → store `x:1`                                  | `maxlen = max(1, 1-0+1) = 2` |
| 2 | y     | 0     | `{z:0, x:1}`      | y not in map → store `y:2`                                  | `maxlen = max(2, 2-0+1) = 3` |
| 3 | z     | 0     | `{z:0, x:1, y:2}` | z seen at 0 ≥ start → move start to 1 (`0+1`), update `z:3` | `maxlen = max(3, 3-1+1) = 3` |
| 4 | x     | 1     | `{z:3, x:1, y:2}` | x seen at 1 ≥ start → move start to 2 (`1+1`), update `x:4` | `maxlen = max(3, 4-2+1) = 3` |
| 5 | y     | 2     | `{z:3, x:4, y:2}` | y seen at 2 ≥ start → move start to 3 (`2+1`), update `y:5` | `maxlen = max(3, 5-3+1) = 3` |
| 6 | z     | 3     | `{z:3, x:4, y:5}` | z seen at 3 ≥ start → move start to 4 (`3+1`), update `z:6` | `maxlen = max(3, 6-4+1) = 3` |

*/
# include<bits/stdc++.h>
using namespace std;
int main(){
    string s="zxyzxyz";
    int n=s.length();
    
    //brute force approach: time complexity O(n^3) space complexity O(1)
    // size_t maxlen = 0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<=n;j++){
    //         string sub=s.substr(i,j-i);
    //         set<char>st(sub.begin(),sub.end());
    //         if(st.size()==sub.length()){
    //             maxlen=max(maxlen,sub.length());
    //         }
    //     }
    // }
    // cout<<maxlen<<endl;

    //optimized approach: time complexity O(n) space complexity O(min(n,m))

    int maxlen = 0, start = 0;
    unordered_map<char, int> charIndexMap;
    for(int i=0;i<n;i++){
        if(charIndexMap.find(s[i])!=charIndexMap.end() && charIndexMap[s[i]]>=start){
            start=charIndexMap[s[i]]+1; // move start to the next position after the last occurrence of s[i]
        }
        charIndexMap[s[i]] = i; // update the last occurrence of s[i]
        maxlen = max(maxlen, i - start + 1); // calculate the length
    }
    cout << maxlen << endl; // Output the length of the longest substring without repeating characters
    return 0;
}