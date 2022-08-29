
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>indeg(V,0);
	    queue<int>q;
	    vector<int>ans;
	    
	    for(int i=0;i<V;i++){ // ik indeg vector bna rhe h 
	        for(auto it:adj[i]){
	            
	           indeg[it]++; // iska mtlb agr 0 h 1 ki adj node mei to 0 ki deg++
	        }
	    }
	    // firr jis jis ki indeg 0 h unhe queue mei push krdo
	    for(int i=0;i<V;i++){
	        if(indeg[i]==0) q.push(i);
	    }
	    // aur firr unke adj nodes dekho aur unki deg-- krdo aur jb unki deg==0 ho jaaye to unhe bhi push krdo
	    while(!q.empty()){
	        int x=q.front();
	        q.pop();
	        ans.push_back(x);
	        for(auto it:adj[x]){
	            indeg[it]--;
	            if(indeg[it]==0){
	                q.push(it);
	            }
	        }
	    }
	    
	    return ans;
	}
