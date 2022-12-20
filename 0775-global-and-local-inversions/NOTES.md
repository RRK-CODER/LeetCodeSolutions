The problem asks us to find whether the number of global inversions are equal to local inversion.And we know all local inversion are global. Why? .Because local inversions are basically gobal with a distance as one between them.So if we can find at least one global inversion which is not local our job is done and we can eliminate by returning false.And since we are maintaining the maximum value all the cases will be covered in it.
​
I have another explaination of the second method.
​
Suppose you have a sorted array [1, 2, 3, 4, 5], and each element differ by one. How can you create a new array with same local inversion and global inversion by swap elements?
​
The answer is simply swap the current element with its neighbor.
​
you can switch A[i] with A[i+1], which turns to be [1, 3, 2, 4, 5] if i=1
you can switch A[i] with A[i-1], which turns to be [2, 1, 3, 4, 5] if i=1
Switch to any other position would break the promise. That's quite intuitive, because switch i to i+2 would create a non-local global inversion.
​
Original explain works quite similar way. If i is not in A[i], A[i+1] and A[i-1], that means there must be a swap between A[i+/-k] swap with A[i] (k>=2), since they are not neighbor at sorted array, you immediately create a non-local global inversion.
​
[1] Non-local global inversion: i < j but A[i] > A[j], however, j - i >=2