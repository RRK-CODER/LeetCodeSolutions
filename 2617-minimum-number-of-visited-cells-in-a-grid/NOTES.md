Intuition
first i thought of solving it Using dynamic programming but that gave TLE because I was not able to optimize the same
on checking complexity constraints i got idea of using Dijkstra algorithm
​
Approach
take distance of entry node to be 1 , here distance denote number of cells visited then apply Dijkstra using built in priority queue
​
Complexity
Time complexity:O(m+n log(m))
Space complexity:O(n*n)
Code