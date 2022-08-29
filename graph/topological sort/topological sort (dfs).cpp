
public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> vis(V,0);
	    stack<int>st;
	    vector<int>ans;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            help(i,vis,st,adj);
	        }
	    }
	    while(!st.empty()){   // for emptying stack and returing ans
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	    
	}
	
	void help(int node,vector<int>&vis,stack<int>&st,vector<int>adj[]){
	    vis[node]=1;
	    
	    for(auto it:adj[node]){
	        if(!vis[it]){
	        help(it,vis,st,adj);
	        
	        }
	        
	    }
	    st.push(node); // jb end mei uss element ka dfs khtm ho jaaye tb push krna h stack mei 
	}
