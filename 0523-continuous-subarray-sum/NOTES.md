Intution :
​
We need a subarray say from i to j such that sum of all elements is divisible by k.
​
sum_j means prefix sum from 0 to j
​
sum_i means prefix sum from 0 to i
​
=> (sum_j - sum_i) % k = 0
=> sum_j % k - sum % k = 0
=> sum_j % k = sum_i % k    <Relation derived !!!>
Thus for some prefix_sum(0,j) , we need to check if there exist some prefix_sum(0,i) such that both are equal.
​
If yes then return true.
Otherwise check for some other j
Lets do a dry run on first example:
​
Given, nums : 23 2 4 6 7 , k = 6
​
Prefix_Sum at every iteration from 0->i :
​
i = 0  , prefixSum = 23%6 = 5       | map[5] = 0 (new entry)
i = 1 , prefixSum = (5+2)%6 = 1     | map[1] = 1 (new entry)
i = 2 , prefixSum = (1+4)%6 = 5     | map[5] (already exist) !! -> Possible answer
Also, i - map[5] = 2 > 1 ... therefore atleast 2 elements condition is also satisfied
​
​
​
​
​