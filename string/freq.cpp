#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int freq[26];

    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    for(int i=0;i<26;i++){
        freq[s[i]-'a']++;
    }


    char ans = 'a';
    int maxi = 0;

    for(int i=0;i<26;i++){
        if(freq[i]>maxi){
            maxi=freq[i];
            ans=i+'a';
        }
    }

    cout<<maxi<<"--"<<ans<<endl;

    return 0;


}