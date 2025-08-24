# include<bits/stdc++.h>
using namespace std;    
int main(){
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }

    //optimal
    vector<int> divisors;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if(i != n/i) { // Avoid adding the square root twice if n is a perfect square
                divisors.push_back(n/i);
            }
        }
    }
    for(int i=0;i<divisors.size();i++){
        cout<<divisors[i]<<" ";
    }
}