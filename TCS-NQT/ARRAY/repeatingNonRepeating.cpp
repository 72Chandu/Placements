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
    vector<int>repeat;
    vector<int>nonRepeat;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        if(it.second>1){
            repeat.push_back(it.first);
        } else {
            nonRepeat.push_back(it.first);
        }
    }
    cout<<"REPEATING ELEMENTS: ";
    for(int i=0;i<repeat.size();i++){
        cout<<repeat[i]<<" ";
    }
    cout<<endl;
    cout<<"NON-REPEATING ELEMENTS: ";
    for(int i=0;i<nonRepeat.size();i++){
        cout<<nonRepeat[i]<<" ";
    }
}