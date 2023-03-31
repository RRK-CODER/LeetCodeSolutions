Given a rectangular grid with apples on the cells, what is the number of ways to cut the grid into k pieces so that each piece has at least one apple on them?
​
Explanation
url= https://leetcode.com/problems/number-of-ways-of-cutting-a-pizza/discuss/623759/C%2B%2B-DP-cutting-(with-picture-explanation)
image
​
This is a DP problem. Let n, m denote the rows and columns of the matrix, mat denote the matrix, f[r][c][l] denote the number of ways to cut mat[r..n-1][c..m-1] into l pieces so that each piece has at least one apple on them, g[r][c] denote the number of apples on mat[r..n-1][c..m-1]. Because after cutting, we always have the down-right corner of the matrix left, so this setting is valid.
​
For mat[r..n-1][c..m-1], we can cut the matrix in two directions in a number of ways, as long as the piece that is cut off has at least one apple on it. So
​
f[r][c][l] =
sum(f[i][c][l-1]) (i=r+1...n-1, g[r][c]-g[i][c]>0) +
sum(f[r][j][l-1]) (j=c+1...m-1, g[r][c]-g[r][j]>0)
The time complexity is O(n * m * max(n, m) * k).
​
C++ Solution
Note: in the code, f[r][c][rest] means the way to cut mat[r..n-1][c..m-1] with rest cuts (and cutting into rest+1 pieces).
​
class Solution {