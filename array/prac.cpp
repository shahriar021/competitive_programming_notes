#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[6]={5,2,4,1,3,6};

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
     for(int i=0;i<6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
            }
        }
     }

     for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}