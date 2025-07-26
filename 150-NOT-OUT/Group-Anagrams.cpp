/*
Example 1
Input: strs = ["act","pots","tops","cat","stop","hat"]

Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]
Example 2
Input: strs = ["x"]

Output: [["x"]]
Example 3
Input: strs = [""]

Output: [[""]]
*/
# include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>s={"act","pots","tops","cat","stop","hat"};

    // Time Complexity: O(n * k log k) where n is the number of strings and k is the maximum length of a string
    // Space Complexity: O(n * k) for storing the anagrams
    unordered_map<string, vector<string>> anagrams; // sorted-string->string
    for(const string& str:s){
        string sortedStr=str;
        sort(sortedStr.begin(), sortedStr.end());
        anagrams[sortedStr].push_back(str);
    }
    vector<vector<string>> result;
    for(const auto& pair: anagrams){
        result.push_back(pair.second);
    }
    for(const auto& group: result){
        cout << "[";
        for(const string& word: group){
            cout << "\"" << word << "\", ";
        }
        cout << "\b\b]" << endl; // To remove the last comma and space
    }
    return 0;
}