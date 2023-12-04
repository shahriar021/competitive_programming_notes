#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool found=false;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        int low=0,hi=n-1;

        while(low<hi){
            if(arr[low]+arr[hi]==target){
                found=true;
            }

            if(arr[low]+arr[hi]>target){
                hi--;
            }else{
                low++;
            }
        }
    }
    if(found){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }

    return 0;

}