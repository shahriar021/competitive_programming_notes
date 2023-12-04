#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
    int arr[100];
    int max=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max;

    return 0;


}