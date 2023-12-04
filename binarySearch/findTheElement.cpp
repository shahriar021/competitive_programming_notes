#include<bits/stdc++.h>
using namespace std;
//sort must
int main(){

    int l,r,mid;
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    int key;
    cin>>key;

    l=0,r=n-1;

    while(l<r){
        mid=(l+r)/2;
        if(arr[mid]==key){
            cout<<"found";
        }
        else if(arr[mid]<key){
            r--;
        }
        else{
            l++;
        }

        l++;
        r--;
    }

    return 0;
}