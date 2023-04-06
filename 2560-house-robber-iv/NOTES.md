If mid is valid, you do left = mid or right = mid, because you don't want to miss a valid solution. If mid is not valid, then you for sure can skip it, so: right = mid - 1 or left = mid + 1;
Whether it's left or right, depend on you are asked to solve for min or max value.
I moved validation part out for easy understanding: Binary Search + Greedy
​
Add a bit more detail regarding left vs right:
If you are asked to solve for min valid value, then you move right (upper bound) down when valid, so right = mid, and do left = mid + 1 when invalid
​
If you are asked to solve for max valid value, then you move lower bound up when valid, so left = mid, and right = mid - 1 when invalid
​
Intuition
Hey Robber series,
old school DP problem,
I practiced thousands of times.
​
Wait, in classical Robber problem,
we usually want to maximize the value to steal.
​
Here we want to minimize the maximum house we steal.
So it's not a robber-like problem,
it's actually a mini-max problem.
​
When we mini-max one capacity to do something,
(here is robber k houses)
we can use bianry search.
​
When use binary search,
I suggest you using my template
​
while (left < right) {
int mid = (left + right) / 2;
if (condition)
right = mid;
else
left = mid + 1;
}
return left;
​
Explanation
Binary search the minimum capability of the robber
to steal at least k houses.
​
Given 1 <= A[i] <= 1e9,
we can initial the binary search range as
left = 1 and right = 1e9.
we can also set left = min(A) and right = max(A).
​
Assume the capability is mid,