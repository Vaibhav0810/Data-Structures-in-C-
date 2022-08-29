#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:

  void shortestPath (int V, vector < int >adj[], int src)
  {
    vector < int >dist (V, INT_MAX);

      std::queue < int >q;

      dist[src] = 0;
      q.push (src);

    while (!q.empty ())
      {
	int node = q.front ();
	  q.pop ();
	for (auto it:adj[node])
	  {
	    if (dist[node] + 1 < dist[it])
	      {
		dist[it] = dist[node] + 1;
		q.push (it);
	      }
	  }
      }
    //   for(int i=0;i<dist.size();i++){
    //       cout<<dist[i];
    //   }
    for (auto it:dist)
      {
	cout << it;
      }
  }



};

int
main ()
{
  int n, m;
  cin >> n >> m;

  vector < int >adj[n];
  for (int i = 0; i < m; i++)
    {
      int u, v;
      cin >> u >> v;
      adj[u].push_back (v);
      adj[v].push_back (u);
    }
  Solution obj;
  obj.shortestPath (n, adj, 0);

}
