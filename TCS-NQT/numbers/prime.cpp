# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int count=1;
    // for(int i=2;i<=n;i++){
    //     if(n%i==0){
    //         count++;
    //     }
    // }
    // if(count==2) cout<<"true"<<endl; // n is prime
    // else cout<<"false"<<endl;

    // optimal
    if(n<2) {
        cout<<"false"<<endl; // 0 and 1 are not prime numbers
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"false"<<endl;
            return 0;
        }
    }
    cout<<"true"<<endl;
    return 0;
}