/*
Example 1
Input: ["prepinsta","course","are","best"]
Output: ["prepinsta","course","are","best"]

Example 2
Input: ["we","say",":","yes"]
Output: ["we","say",":","yes"]
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>strs={"prepinsta","course","are","best"};

    // Time Complexity: O(n) where n is the total number of characters in all strings
    // Space Complexity: O(n) for storing the encoded string and the decoded strings
    string encoded;
    for(const string& str : strs){
        encoded += to_string(str.size()) + "#" + str;
    }
    cout << encoded << endl;

    
    vector<string> decoded;
    int i = 0;
    while(i < encoded.size()){
        int j = i;
        while(encoded[j] != '#') j++;
        int length = stoi(encoded.substr(i, j - i));
        decoded.push_back(encoded.substr(j + 1, length));
        i = j + 1 + length;
    }

    for(const string& str : decoded){
        cout << "\"" << str << "\", ";
    }
    cout << "\b\b" << endl; // To remove the last comma and space
    return 0;
}