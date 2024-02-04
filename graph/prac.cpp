#include<bits/stdc++.h>
#include<unordered_map>
#include<list>

using namespace std;

class graph{
    public:
    unordered_map<int,list<int>>adjLIst;
    void adj(int n,int e,bool direction){
        adjLIst[n].push_back(e);
        if(direction==1){
            adjLIst[e].push_back(n);
        }
    }

    void printAdjList(){

        for(auto i:adjLIst){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main(){

    int n,m;
    cin>>n>>m;
    graph g;
    for(int i=0;i<m;i++){
        int v,e;
        cin>>v>>e;
        g.adj(v,e,0);
    }

    g.printAdjList();
    return 0;
}