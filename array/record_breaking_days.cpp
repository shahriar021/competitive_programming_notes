#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int j;
    int ans=0;
    int  mx=-1;
    for(int j =0;j<n;j++){
        if(arr[j]>mx && arr[j]>arr[j+1]){
            ans++;
            
        }
        mx=max(mx,arr[j]);
    }
    cout <<ans;
    return 0 ;
}