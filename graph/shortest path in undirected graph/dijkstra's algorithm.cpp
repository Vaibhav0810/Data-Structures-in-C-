

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,e,source;
    cin>>n>>e;
    vector<pair<int,int>>g[n+1];
    for(int i=0;i<e;i++){
        int a,b,wt;
        cin>>a>>b>>wt;
        g[a].push_back(make_pair(b,wt));
        g[b].push_back(make_pair(a,wt));
    }
    cin>>source;
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int>distTo(n+1,INT_MAX);
    distTo[source]=0;
    pq.push(make_pair(0,source));
    
    while(!pq.empty()){
        int dist=pq.top().first;
        int prev=pq.top().second;
        pq.pop();
        
        for(auto it:g[prev]){
            int next=it.first;
            int nextDist=it.second;
            if(distTo[next]>distTo[prev]+nextDist){
                distTo[next]=distTo[prev]+nextDist;
                pq.push(make_pair(distTo[next],next));
            }
            
        }
        
    }
    for(int i=1;i<=n;i++) cout<<distTo[i]<<" ";
    
}
