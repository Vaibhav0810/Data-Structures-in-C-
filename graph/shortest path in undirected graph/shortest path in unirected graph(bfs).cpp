// in this we are assuming src to be 0 vrna Q mei given hoga
// isme ik graph dia h unit weights ka to hme ik src se baaki sari nodes ka min dist store krna h

// isme phle ik dist vector bnakr unme int max daal lia hmne
// fir check kr rhe h dist[node]+1 < dist[it] se to push ni to phle ka dist hi rhendo
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
// input
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
