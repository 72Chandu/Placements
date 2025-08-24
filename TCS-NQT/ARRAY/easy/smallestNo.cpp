#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    int n;
    cin>>n;
    cout<<"ENTER THE ELEMENTS OF THE ARRAY: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minimele=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<minimele){
            minimele=arr[i];
        }
    }
    cout<<"MINIMUM ELEMENT="<<minimele;
    return 0;
}