#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"ENTER THE ELEMENTS OF THE ARRAY: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>rank(n);
    for(int i=0;i<n;i++){
        unordered_set<int>uniqueElements;
        for(int j=0;j<n;j++){
            if(arr[j]<arr[i] && uniqueElements.find(arr[j]) == uniqueElements.end()){
                uniqueElements.insert(arr[j]);
            }
        }
        rank[i] = uniqueElements.size() + 1; // +1 for the current element
    }

    cout<<"RANK OF ELEMENTS IN THE ARRAY: \n";
    for(int i=0;i<n;i++){
        cout<<"Rank("<<arr[i]<<") = "<<rank[i]<<" (at index "<<i<<")\n";
    }
}
/*
Let the given array arr[] = {2, 2, 1, 6}, then rank of elements is given by: 
sorted array is: 
arr[] = {1, 2, 2, 6} 
Rank(1) = 1 (at index 0) 
Rank(2) = 2 (at index 1) 
Rank(2) = 2 (at index 2) 
Rank(6) = 4 (at index 3)

Initialization:
arr = {100, 5, 70, 2}
n = 4 (size of the array)
res = {?, ?, ?, ?} (empty result array)

First iteration (i = 0, arr[i] = 100):
Initialize an empty unordered_set.
Compare 100 with every element:
5 is smaller → add to set {5}
70 is smaller → add to set {5, 70}
2 is smaller → add to set {5, 70, 2}

Rank = size of set + 1 = 3 + 1 = 4
res = {4, ?, ?, ?}

Second iteration (i = 1, arr[i] = 5):
Initialize an empty unordered_set.
Compare 5 with every element:
2 is smaller → add to set {2}
Rank = size of set + 1 = 1 + 1 = 2
res = {4, 2, ?, ?}

Third iteration (i = 2, arr[i] = 70):
Initialize an empty unordered_set.
Compare 70 with every element:
5 is smaller → add to set {5}
2 is smaller → add to set {5, 2}
Rank = size of set + 1 = 2 + 1 = 3

res = {4, 2, 3, ?}
Fourth iteration (i = 3, arr[i] = 2):
No elements are smaller, so rank = 1
res = {4, 2, 3, 1}


methode 2
sort(arr.begin(), arr.end());
    unordered_map<int, int>ranks;
    int rank=1;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue; // Skip duplicate elements
        }
        ranks[arr[i]]=rank++;
    }
    vector<int>rank(n);
    for(int i=0;i<n;i++){
        rank[i] = ranks[arr[i]];
    }
        Initialization:

arr = {100, 5, 70, 2}

n = 4

Sorting the Input Array:
sorted = {2, 5, 70, 100} (after sorting)
Assigning Ranks using a HashMap (unordered_map):
rank = 1
Traverse sorted array:

sorted[0] = 2 → ranks[2] = 1
sorted[1] = 5 → ranks[5] = 2
sorted[2] = 70 → ranks[70] = 3
sorted[3] = 100 → ranks[100] = 4

Final ranks map: {2: 1, 5: 2, 70: 3, 100: 4}

Replacing Elements with Their Rank in res Array:

Traverse original arr:
arr[0] = 100 → res[0] = ranks[100] = 4
arr[1] = 5 → res[1] = ranks[5] = 2
arr[2] = 70 → res[2] = ranks[70] = 3
arr[3] = 2 → res[3] = ranks[2] = 1
Final res array: {4, 2, 3, 1}
 */