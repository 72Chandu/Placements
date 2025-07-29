/*
Example 1
Input: s = "Was it a car or a cat I saw?"
Output: true
Explanation: After considering only alphanumerical characters we have “wasitacaroracatisaw”, which is a palindrome.

Example 2
Input: s = "tab a cat"
Output: false
*/
# include<bits/stdc++.h>
using namespace std;

int main(){
    string s = {"Was it a car or a cat I saw?"};

    // brute force approach : reverse the string and compare , Time Complexity: O(n) space Complexity: O(n)
   
   
    // string new_s = "";
    // for(char c : s) {
    //     if(isalnum(c)) {
    //         new_s += tolower(c);
    //     }
    // }
    // string rev_s = new_s;
    // reverse(rev_s.begin(), rev_s.end());
    // if(new_s == rev_s) {
    //     cout << "true" << endl;
    // } else {
    //     cout << "false" << endl;
    // }


    // optimized approach : two pointer approach, Time Complexity: O(n) space Complexity: O(1)

    int l=0, r=s.size()-1;
    while(l<r){
        while(l<r && !isalnum(s[l])) l++;
        while(l<r && !isalnum(s[r])) r--;
        if(tolower(s[l])!=tolower(s[r])){
            cout << "false" << endl;
            return 0;
        }
        l++;
        r--;
    }
    cout << "true" << endl;
}