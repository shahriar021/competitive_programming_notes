#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr[5]={5,9,7,1,3};
    int n;
    cin>>n;
    int arr[n];
    
    // int max=0;
    // for(int i=0;i<5;i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    // }

    // cout<<"maximum is "<<max<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    while(i<=j){
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[j]=temp;
        i += 2;
        j -= 2;
    }
    

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}