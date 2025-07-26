/*
Example 1
Input: s = "racecar", t = "carrace"
Output: true

Example 2
Input: s = "jar", t = "jam"
Output: false
*/
# include <bits/stdc++.h>
using namespace std;
int main(){
    string s="racecar", t="carrace";
    if(s.size()!=t.size()){
        cout<<"false"<<endl;
        return 0;
    }

    //time complexity: O(n)
    //space complexity: O(n)

    // unordered_map<char,int>m;
    // for(char c:s){
    //     m[c]++;
    // }
    // for(char c:t){
    //     if(m.find(c)==m.end()|| m[c]==0){
    //         cout<<"false"<<endl;
    //         return 0;
    //     }
    //     m[c]--;
    // }
    // cout << "true" << endl; 
    

    // Alternative method using sorting: Time Complexity: O(n log n) Space Complexity: O(n)

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}

