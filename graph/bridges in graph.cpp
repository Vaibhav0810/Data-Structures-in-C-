
// A bridge is a line in graph jisko agr hm htate h to graph components mei bdd jaata h jaise graph h 1 2 3 4to agr 3 and 4 ke beech ki line htayenge to 2 component ho
// jayenge 1 2 3 and 4

#include <bits/stdc++.h>
using namespace std;

void help(int node,int parent,vector<int>& visi,vector<int>&tin,vector<int>& low,int &timer,vector<int>adj[]){
    visi[node]=1;
    tin[node]=low[node]=timer++;
    for(auto child:adj[node]){
        
        if(child==parent) continue;
        
        if(!visi[child]){
            help(child,node,visi,tin,low,timer,adj);
            low[node]=min(low[node],low[child]);
            if(low[child]>tin[node]){
                cout<<node<<" "<<child<<endl;
            }
           } else {
                low[node]=min(low[node],tin[child]);
            }
        
    }
}

void dfs(int V,vector<int>adj[]){
    vector<int>tin(V,-1);
    vector<int>low(V,-1);
    vector<int>visi(V,0);
    int timer=0;
    for(int i=0;i<V;i++){
        if(!visi[i]){
            help(i,-1,visi,tin,low,timer,adj);
        }
    }
    return;
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }
    dfs(n,adj);
}
