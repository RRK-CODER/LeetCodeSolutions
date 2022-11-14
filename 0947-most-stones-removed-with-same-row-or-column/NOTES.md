a col index, connect two stones on this col.
​
In another view：
A stone, connect a row index and col.
​
Have this idea in mind, the solution can be much simpler.
The number of islands of points,
is the same as the number of islands of indexes.
​
​
7. Union-Find
I use union find to solve this problem.
As I mentioned, the elements are not the points, but the indexes.
​
for each point, union two indexes.
return points number - union number
Copy a template of union-find,
write 2 lines above,
you can solve this problem in several minutes.
​
​
Complexity
union and find functions have worst case O(N), amortize O(1)
The whole union-find solution with path compression,
has O(N) Time, O(N) Space
​
If you have any doubts on time complexity,
please refer to wikipedia first