# include<bits/stdc++.h>
using namespace std;
// int gcd(int a,int b){
//     if(b==0) return a;
//     if(a==0) return b;
//     if(a==b) return a;
//     if(a>b) return gcd(a-b,b);
//     return gcd(a,b-a);
// }

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b, a % b); // Using Euclidean algorithm for GCD
}

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    cout<<gcd(n1,n2)<<endl;
    return 0;
}