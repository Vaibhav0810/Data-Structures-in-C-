class Solution{
  public:
  
  vector<int>bfsofGraph(int V,vector<int>adj[]){
      vector<int>bfs;
      vector<int> vis(V+1,0); // vis means visited and marking everyone 0 in starting
      
      for(int i=1;i<=V;i++){ // bcoz there can be multiple componensts in graph i.e. for loop is needed
          if(!vis[i]){
              queue<int>q ;
              q.push(i);
              vis[i]=1;
              while(!q.empty()){
                  int node=q.front();
                  cout<<node;
                  q.pop();
                  bfs.push_back(node);
                  for(auto it:adj[node]){
                      if(!vis[it]){
                          q.push(it);
                          vis[it]=1;
                      }
                  }
              }
              
          }
      }
      return bfs;
  }
  
};
