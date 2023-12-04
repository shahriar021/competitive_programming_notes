#include <bits/stdc++.h>
using namespace std;

bool foundtri(int a[],int n,int key){
    sort(a.begin(),a.end());
    
    for(int i = 0; i<n ; i++ ){
    int lo = i + 1;
    int hi = n-1;
    while(lo < hi){
        int current = a[i] + a[lo] + a[hi];
        if(current == key){
            return true;
        }
        else if(current > key){
            hi--;
        }
        else{
            lo++;   
        }
    }
    }
    return false;
}

int main(){
    int n, key;
    cin >> n >> key;
    int a[n];
    for(int &i:a){
        cin >> i;
    }
    cout << foundtri(a,n,key) << endl;
    return 0;
}