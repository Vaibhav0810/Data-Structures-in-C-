
Time-O(N+E) SPace-O(N+E)+O(N)+O(N) ~ O(N)

  
  // isme kya kr rhe h vo register mei likha h
  
class Solution{
  public:
  
  void help(int node,vector<int> & ans,vector<int>& vis,vector<int>adj[]){
      ans.push_back(node);
      vis[node]=1;
      for(auto it:adj[node]){
          if(!vis[it]){
              help(it,ans,vis,adj);
          }
      }
  }
  
  
  vector<int>intoDfs(int V, vector<int> adj[]){
      vector<int> ans;
      vector<int> vis(V+1,0);
      
      for(int i=1;i<=V;i++){
          if(!vis[i])
          help(i,ans,vis,adj);
      }
      return ans;
  }
  
};
