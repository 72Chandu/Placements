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
    int key;
    cout<<"ENTER THE ELEMENT TO BE SEARCHED: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"ELEMENT FOUND AT INDEX: "<<i<<endl;
            return 0; // Exit after finding the first occurrence
        }
    }   
    cout<<"ELEMENT NOT FOUND IN THE ARRAY"<<endl;
    return 0;
}