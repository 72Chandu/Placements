//array that contains only 1 and 0

# include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxlen=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            count++;
            maxlen=max(count,maxlen);
        }else{
            count=0;
        }
    }
    cout<<maxlen;
}