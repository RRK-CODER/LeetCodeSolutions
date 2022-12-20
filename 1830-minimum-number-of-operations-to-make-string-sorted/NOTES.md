This is a heavily comuflaged textbook problem. It takes a while to examine test cases and realize that we just need to find the lexicographic rank of the string (with duplicates). You can read and adapt the solution from Geeks4Geeks (search for "Lexicographic rank of a string with duplicate characters'').
​
The main idea is that the substring after i is in the sorted order. If you flip it, you'll need to go through all it's permutations to make it sorted again. We can compute the number of permutations using this formula: n! / (cnt[0]! * cnt[1]! *... * cnt[25]!) where, n - number of characters, and cnt[i] is the count of each unique character.
​
Below is my adaptation. To make it fast, we use two static arrays - one to (ft) precompute factorials [1..3000], the second - to precompute the inverse modulo of these factorials (im). Note that we do this precomputation once for all test cases.
​
Finally, make sure you compute counts (cnt) efficiently. In Geeks4Geeks implementation, they do it in O(n) for each character.