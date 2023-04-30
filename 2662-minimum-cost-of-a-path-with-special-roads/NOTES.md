Intuition
The approach involves using Dijkstra's algorithm to find the minimum cost path from the starting point to the target point. Initially, we set the distances to all the special roads from the starting point, and push them into a priority queue with the current distance as the priority. We then start extracting the minimum element from the priority queue and check if its distance is equal to the distance stored in the vector. If not, we ignore it and continue with the next element.
​
We calculate the distance to the target point via the current element and update the answer if it is less than the current answer. We then iterate over all the special roads and update their distance if it is less than the previously stored distance. We then push this special road onto the priority queue with the new distance as the priority.
​
We repeat this process until the priority queue is empty and return the final answer.
​
Approach
The given problem can be solved using Dijkstra's algorithm. We can think of each special road as a node in the graph and the weight of each edge as the cost of traveling between the two special roads. To compute the cost of traveling from start to target, we can first calculate the cost of traveling from the start to each special road and then use these costs to update the cost of traveling to other special roads. Finally, we can add the cost of traveling from the target to the special road with minimum total cost.
​
Specifically, we can first initialize a vector d of distances from the start to each special road. For each special road i, we can calculate d[i] as the sum of the Manhattan distance between the start and the special road and the cost of the special road. We can then use a min-heap to store the distances and the indices of the special roads. We can start with the distances and indices of the special roads as the source and use Dijkstra's algorithm to update the distances and indices of the special roads. To update the distance of a special road i, we can consider all the special roads that are connected to it and update their distances if the distance to i plus the weight of the edge connecting i and another special road is less than their current distances. Finally, we can add the distance from the target to the special road with minimum total cost to the total cost.
​
Complexity
Time complexity:
The time complexity of the solution is O(n^2 log n), where n is the number of special roads. The reason for this time complexity is the loop that iterates over all the special roads and the priority queue operations, which have a time complexity of O(log n).
​
Space complexity:
The space complexity of the solution is O(n), which is due to the space occupied by the distance array. The priority queue takes O(n) space as well. Thus, the overall space complexity is O(n).