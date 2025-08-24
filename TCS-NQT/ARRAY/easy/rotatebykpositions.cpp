#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    k= k % n;
    if(k < 0) k += n;

    // brute force
    // if(s=="right"){
    //     for(int i=0;i<k;i++){
    //     int lastelement=v[n-1];
    //     v.pop_back();
    //     v.insert(v.begin(), lastelement);
    //     }
    // }else if(s=="left"){
    //     for(int i=0;i<k;i++){
    //     int firstelement=v[0];
    //     v.erase(v.begin()); 
    //     v.push_back(firstelement); 
    //     }
    // }


    // optimized approach: 1 2 3 4 5 6 7 , k=2
    if(s=="right"){
        reverse(v.begin(), v.end());// 7 6 5 4 3 2 1
        reverse(v.begin(), v.begin() + k);//5 6 7    4 3 2 1
        reverse(v.begin() + k, v.end());// 5 6 7   1 2 3 4
    }else if(s=="left"){
        reverse(v.begin(), v.end()); // 7 6 5 4 3 2 1
        reverse(v.begin(), v.begin() + n - k);// 3 4 5 6 7  2 1
        reverse(v.begin() + n - k, v.end()); // 3 4 5 6 7 1 2
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}