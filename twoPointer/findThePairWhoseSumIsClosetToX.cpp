#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,target;
    cin>>n>>target;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=INT_MAX;
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        int low=0,hi=n-1;
        while(low<hi){
            int cSum=a[low]+a[hi];
            int dif=abs(cSum-target);
            ans=min(dif,ans);
            if(cSum>target){
                hi--;
            }else{
                low++;
            }
            
        }
    }

    cout<<ans;
    return 0;
}