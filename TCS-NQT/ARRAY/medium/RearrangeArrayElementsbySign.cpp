# include<bits/stdc++.h>
using namespace std;
//There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    //brute force
    // vector<int>pos,neg;
    // for(int i=0;i<n;i++){
    //     if(v[i]>0) pos.push_back(v[i]);
    //     else neg.push_back(v[i]);
    // }
    // for(int i=0;i<n/2;i++){
    //     v[2*i]=pos[i];
    //     v[2*i+1]=neg[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }



    //optimal
    // int posIdx=0, negIdx=1;
    // vector<int>ans(n,0);
    // for(int i=0;i<n;i++){
    //     if(v[i]<0){ //odd
    //         ans[negIdx]=v[i];
    //         negIdx+=2;
    //     }else{ //even
    //         ans[posIdx]=v[i];
    //         posIdx+=2;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<ans[i]<<" ";
    // }


    //There’s an array ‘A’ of size ‘N’ with an equal(not necessarily) number of positive and negative elements.

    //brute force
    vector<int>pos,neg;
    for(int i=0;i<n;i++){
        if(v[i]>0) pos.push_back(v[i]);
        else neg.push_back(v[i]);
    }
    int posCnt=pos.size();
    int negCnt=neg.size();
    for(int i=0;i<n;i++){
        if(posCnt>0){
            v[2*i]=pos[i];
            posCnt--;
        }
        if(negCnt>0){
            v[2*i+1]=neg[i];
            negCnt--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}