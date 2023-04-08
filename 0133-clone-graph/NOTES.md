1. Cloned Graph has all nodes as newnodes and don't have node as reference to given original graph.
2. Graph has no practical edges, i.e no pointers for edges.
(2,3)            (1,3)<---adj list
(1)-------------(2)
|              |
|              |
|              |
(4)-------------(3)
(1,3)          (2,4)
If i say '1' is my starting point and how should i jump to '2' for that i have to iterate through this adjacency list.
ALGORITHM TO USE
We need to traverse all node of original graph and as soon as we reach a node, we will make a copy node.
And recur for rest of the graph.
This is a typical recursion type problem implemented on Graph.
For 'Recursion' we use basically 'DFS' or 'BFS'.
I am using DFS
KEY POINTS
1. We use HashMap to solve it and using DFS.
2. Initially our hash map will be empty and we try to map the old node with the new node or the copy node.
3. We start with any entry point.
4. I am using '1' as my entry point.
​
Now lets see how its going i am starting with 1 and whenever i visited a new node i coloned it and put in there.