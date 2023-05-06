Intuition
Almost same as problem two sum.
If we want to know the count of subarray in sorted array A,
then it's exactly the same.
Make sure you can do two sum before continue.
​
​
Explanation
Sort input A first,
For each A[i], find out the maximum A[j]
that A[i] + A[j] <= target.
​
For each elements in the subarray A[i+1] ~ A[j],
we can pick or not pick,
so there are 2 ^ (j - i) subsequences in total.
So we can update res = (res + 2 ^ (j - i)) % mod.
​
We don't care the original elements order,
we only want to know the count of sub sequence.
So we can sort the original A, and the result won't change.
​
​
Complexity
Time O(NlogN)
Space O(1) for python
What is the exact use of this line for (int i = 1 ; i < n ; ++i)
pows[i] = pows[i - 1] * 2 % mod; and how it calculates res in this line   res = (res + pows[r - l++]) % mod;
The line for (int i = 1 ; i < n ; ++i) pows[i] = pows[i - 1] * 2 % mod; is used to precompute a vector pows of size n, where each element pows[i] represents 2 raised to the power of i modulo mod. This is done to calculate the number of subsequences that can be formed with a given length.
​
For example, suppose we have a subsequence of length k. There are n choose k possible ways to choose a subsequence of length k from a sequence of length n. This is equivalent to the number of ways to choose k elements out of n, which is given by the binomial coefficient n choose k.
​
The binomial coefficient can be expressed as n choose k = n! / (k! * (n - k)!). However, this formula involves computing factorials, which can be computationally expensive for large values of n and k.
​
Instead, we can use the following formula to calculate the number of ways to choose k elements out of n:
​
n choose k = 2^k * (n-1) choose (k-1)
​
This formula tells us that the number of ways to choose k elements out of n is equal to 2^k times the number of ways to choose k-1 elements out of n-1. We can use this formula to recursively compute the number of ways to choose k elements out of n.
​
The pows vector is used to efficiently calculate 2^k for all 0 <= k <= n. Specifically, pows[i] stores the value of 2^i % mod. This allows us to compute 2^k as pows[k].
​
Now, let's look at the line res = (res + pows[r - l++]) % mod;. Here, r - l++ calculates the length of the current subsequence, and pows[r - l++] calculates the number of subsequences of that length. This number is added to the current result res and the left index l is incremented.
​
Note that we're using the precomputed pows vector to calculate the number of subsequences of a given length instead of using the binomial coefficient formula directly. This is more efficient because computing the binomial coefficient involves computing factorials, which can be computationally expensive for large values of n and k.
(O(N) space for java and c++ can be save anyway)