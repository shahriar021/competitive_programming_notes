#include<bits/stdc++.h>
using namespace std;


int main(){

    int arr[5]={9,5,4,1,2};

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int i=0,j=4;
    while(i<j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}