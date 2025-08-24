#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin >> n;
   string s=to_string(n);
   int n_length = s.length();
   int sum=0;
   for(int i=0;i<n_length;i++){
    int digit = s[i] - '0';
    int power=1;
    for(int j=0;j<n_length;j++){
        power*=digit;
    }
    sum+=power;
    // sum+=pow(digit,n_length); not working 
   }
   if(sum==n){
         cout<<"true"<<endl;    
    }else{
         cout<<"false"<<endl;
    }
    return 0;
}