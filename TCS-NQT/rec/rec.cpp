# include <bits/stdc++.h>
using namespace std;
void ntimes(string s,int n){
    if(n== 0) return; 
    cout <<s<<endl;
    ntimes(s, n-1);
}
void no(int n){
    if(n==0) return;
    cout<<n<<endl;
    no(n-1);
}
void revno(int n){
    if(n==0) return;
    revno(n-1);
    cout<<n<<endl;
}
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}
void revarr(vector<int>&a,int n){
    if(n<0) return;
    cout<<a[n]<<" ";
    revarr(a, n-1);
}
bool ispalindrome(string& s, int lo, int hi) {
    if (lo >= hi) return true;
    if (s[lo] != s[hi]) return false;
    return ispalindrome(s, lo + 1, hi - 1);
}
int main(){
    // string name;
    // cin >> name;
    // int n;
    // cin>>n;
   
    // ntimes(name, n);
   
    // no(n);
   
    // revno(n);
    
    // cout<<sum(n)<<endl;
    
    // cout<<fact(n)<<endl;
    
    // cout<<fib(n)<<endl;

    // vector<int> arr(n);
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // revarr(arr,n-1);

    string s;
    getline(cin, s); // Read full line including spaces
    string new_s;
    for (char c : s) {
        if (isalnum(c)) {
            new_s += tolower(c);
        }
    }
    int len = new_s.length() - 1;
    cout << (ispalindrome(new_s, 0, len) ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
