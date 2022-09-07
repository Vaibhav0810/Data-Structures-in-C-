                                                // PRIMS ALGORITHM

// BRUTE FORCE
// TIME- O(N^2) SPACE ALL ARRAY + ADJACENCY LIST

// isme hm 3 array bnayenge  and lowest se start krenge (0 based indexing mei 0 se aise) firr weight mei minimum weight mark krte jaytenge jo hme milega 1 edge tk phchne
// ke lie sari nodes ka minimum ( jaise 1 --- 2 jaane ke 0 raste h ik pr weight 1 and ik pr 4 to 1 vala lenge) and then jo jo visit krle unpr true lgado
// aur parent array mei parent mark krte chlo unka

public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        
        vector<int>weightOfEdges(V,INT_MAX);
        vector<bool>visited(V,false);
        vector<int>parent(V,-1);
        
        weightOfEdges[0]=0;
        
        for(int count=0;count<V-1;count++){
            int mini=INT_MAX,u;
            
            for(int i=0;i<V;i++){
                if(visited[i]==false && mini>weightOfEdges[i]){
                    mini=weightOfEdges[i];
                    u=i;
                }
            }
            visited[u]=true;
            
            
            for(auto it:adj[u]){
                int weight=it[1];
                int node=it[0];
                if(visited[node]==false && weight<weightOfEdges[node]){
                    weightOfEdges[node]=weight;
                    parent[node]=u;
                }
            }
            
        }
        int sum=0;
        for(int i=0;i<V;i++){
            sum=sum+weightOfEdges[i];
        }
        return sum;
    }

							//OPTIMISED USING PQ

// Expected Time Complexity: O(ElogV).
//Expected Auxiliary Space: O(V^2).

 int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        
        vector<int>weightOfEdges(V,INT_MAX);
        vector<bool>visited(V,false);
        vector<int>parent(V,-1);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        weightOfEdges[0]=0;
        parent[0]=-1;
        pq.push({0, 0}); 
        
        while(!pq.empty()){
            int u=pq.top().second;
            pq.pop();
            visited[u]=true;
            
            
            
            for(auto it:adj[u]){
                int weight=it[1];
                int node=it[0];
                if(visited[node]==false && weight<weightOfEdges[node]){
                    
                    parent[node]=u;
                    weightOfEdges[node]=weight;
                    pq.push({weightOfEdges[node],node});
                    
                }
            }
            
        }
        int sum=0;
        for(int i=0;i<V;i++){
            sum=sum+weightOfEdges[i];
        }
       
