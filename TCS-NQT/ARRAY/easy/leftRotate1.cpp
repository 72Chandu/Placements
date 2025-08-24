# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    // brute force
    // int firstelement=v[0];
    // v.erase(v.begin()); //remove first element
    // v.push_back(firstelement);

    //optimized approach

    int temp=v[0];
    for(int i=1;i<n;i++){
        v[i-1]=v[i];
    }
    v[n-1]=temp;

    
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}