#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    int max=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;
            if(sum>max){
                max=sum;
            }
        }
    }
    cout<<max<<endl;
    

    return 0 ;
}