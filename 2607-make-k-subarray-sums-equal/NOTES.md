The sum of all subarrays of size k is equal if:
​
arr[i] == arr[i + k]
arr[i] == arr[i + 2 * k]
and so on.
As we roll a window of size k, we remove element arr[i] and add element arr[i + k].
​
For the sum to stay the same, the removed and added element must be the same. This can be also proven by a contradiction.
​
So, for each position i, we collect all elements in the k-cycle.
​
Then, we determine the median and perform operations to make all elements equal to that median.
​
C++
We use nth_element instead of sorting to find a median in O(n) in an average case
​
Based on my understanding this is how the solution works.
Given k, Sum of each window of size k will be same only if every window contains same numbers in them.
We can make sure that every window of size k contains the same elements by following below rule(Say rule 1).
​
arr[i] == arr[i + k]
arr[i] == arr[i + 2 * k]
and so on.
Take the example
​
Input: arr = [1,4,1,3], k = 2