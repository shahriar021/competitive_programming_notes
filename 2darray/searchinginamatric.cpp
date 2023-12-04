#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    int key;
    bool flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                flag=1;
            }
        }
    }

    if(flag){
        cout<<"found the item";
    }else{
        cout<<"didn't found";
    }

    return 0;
}