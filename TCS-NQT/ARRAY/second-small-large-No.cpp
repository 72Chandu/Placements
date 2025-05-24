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
    int secondminiele=arr[0];
    int maxele=arr[0];
    int secondmaxele=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<minimele){
            secondminiele=minimele;
            minimele=arr[i];
        }
        if(arr[i]>maxele){
            secondmaxele=maxele;
            maxele=arr[i];
        }
    }
    cout<<"SECOND MINIMUM ELEMENT="<<secondminiele<<endl;
    cout<<"SECOND MAXIMUM ELEMENT="<<secondmaxele<<endl;
    return 0;
}