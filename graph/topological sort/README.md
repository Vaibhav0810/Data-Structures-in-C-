
Topological sort
MediumAccuracy: 40.0%Submissions: 100k+Points: 4
Lamp
This problem is part of GFG SDE Sheet. Click here to view more.  

Given a Directed Acyclic Graph (DAG) with V vertices and E edges, Find any Topological Sorting of that Graph.


Example 1:

Input:
![download](https://user-images.githubusercontent.com/73460717/187125657-1c4583f6-83bf-4fa1-8ccd-74d0d0c9e473.png)

Output:
1
Explanation:
The output 1 denotes that the order is
valid. So, if you have, implemented
your function correctly, then output
would be 1 for all test cases.
One possible Topological order for the
graph is 3, 2, 1, 0.
Example 2:

Input:
![download](https://user-images.githubusercontent.com/73460717/187125676-4b7db394-380c-4ed3-aeb6-32fa7b77b778.png)

Output:
1
Explanation:
The output 1 denotes that the order is
valid. So, if you have, implemented
your function correctly, then output
would be 1 for all test cases.
One possible Topological order for the
graph is 5, 4, 2, 1, 3, 0.

Your Task:
You don't need to read input or print anything. Your task is to complete the function topoSort()  which takes the integer V denoting the number of vertices and adjacency list as input parameters and returns an array consisting of a the vertices in Topological order. As there are multiple Topological orders possible, you may return any of them. If your returned topo sort is correct then console output will be 1 else 0.


Expected Time Complexity: O(V + E).
Expected Auxiliary Space: O(V).
