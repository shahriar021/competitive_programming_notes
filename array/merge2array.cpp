#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[3]={2,5,6};
    int arr2[2]={1,3};

    int arr3[5];
    int i=0,j=0,k=0;
    while(i<3 && j<2){
        
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        
    }

    while (i < 3) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // Handle remaining elements in arr2 (if any)
    while (j < 2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    for(int i=0;i<5;i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}