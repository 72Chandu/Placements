#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxele=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxele){
            maxele=arr[i];
        }
    };
    cout<<"MAXIMUM ELEMENT="<<maxele;
    return 0;
}