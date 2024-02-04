#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        c=0;
        for(int j=0;j<n;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    c++;
                }
            }
        }
        if(c==0){
            cout<<arr[i]<<"->";
        }
    }
}