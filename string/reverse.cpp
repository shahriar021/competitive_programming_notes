#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[10];
    cin>>a;
    int c=0;

    for(int i=0;i<a[i]!='\0';i++){
        c++;
    }
    cout<<c;
    int i=0;
    int j=c;

    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

    cout<<a<<endl;
    return 0;
}