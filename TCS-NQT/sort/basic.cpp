# include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&v){
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
}

void selectionSort(vector<int>&v){
    for(int i=0;i<v.size()-1;i++){
        int minidx=i;
        for(int j=i+1;j<v.size()-1;j++){
            if(v[j]<v[minidx]){
                minidx=j;
            }
        }
        swap(v[i], v[minidx]);
    }
}

void insertionSort(vector<int>&v){
    for(int i=1;i<v.size();i++){
        int key=v[i];
        int j=i-1;
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=key;
    }
}

void merge(vector<int>&v,int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    vector<int>a1(n1),a2(n2);
    for(int i=0;i<n1;i++){
        a1[i]=v[l+i];
    }
    for(int i=0;i<n2;i++){
        a2[i]=v[mid+1+i];
    }
    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(a1[i]<a2[j]){
            v[k]=a1[i];
            i++;
            k++;
        }else{
            v[k]=a2[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        v[k]=a1[i];
        i++;
        k++;
    }
    while(j<n2){
        v[k]=a2[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>&v, int l, int r){
    if(l<r){
        int mid=l+(r-l)/2;
        mergeSort(v,l,mid);
        mergeSort(v,mid+1,r);
        merge(v,l,mid,r);
    }
}

int partion(vector<int>&v,int l,int r){
    int pivot=v[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(v[j]<pivot){
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i+1], v[r]);
    return i+1;
}
void quickSort(vector<int>&v,int l,int r){
    if(l<r){
        int pi=partion(v,l,r);
        quickSort(v,l,pi-1);
        quickSort(v,pi+1,r);
    }
}

void reccBubbleSort(vector<int>&v,int n){
    if(n==1) return;
    for(int i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            swap(v[i], v[i+1]);
        }
    }
    reccBubbleSort(v, n-1);
}

void reccIsertionSort(vector<int>&v,int n){
    if(n<=1) return;
    reccIsertionSort(v, n-1);
    int key=v[n-1];
    int j=n-2;
    while(j>=0 && v[j]>key){
        v[j+1]=v[j];
        j--;
    }
    v[j+1]=key;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // bubbleSort(v);
    // selectionSort(v);
    // insertionSort(v);
    // mergeSort(v, 0, n-1);
    // quickSort(v,0,n-1);
    // reccBubbleSort(v, n);
    reccIsertionSort(v, n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}