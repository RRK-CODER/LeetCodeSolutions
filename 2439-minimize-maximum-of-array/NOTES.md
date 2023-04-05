We calculate the prefix sum arrray and their average.
The average is the lower bound of the result,
and it's reachable lower bound by the process in intuition,
so this average is the result.
​
​
Calculate average
We need to calculate the ceil integer of the average,
For example 7 = 3 + 2 + 2,
the ceil average is 3.
​
The ceil average with sum of i + 1 number:
ceil(double(sum) / (i + 1))
​
We can also do integer division:
(sum + i) / (i + 1)
We need to calculate the ceil of the average, as if in case sum is not divisible by i+1 then we need to take the bigger number.
​
It can be done using inbuilt ceil function like ceil(sum/(i + 1)), but here catch is that we need to use data type like double or float for numerator and denominator because of which there might occur some PRECISION error.
​
So to proceed with normal int or long long int data type and to avoid unnecessary errors we can use the following formula to calculate the ceil.
​
ceil(a/b) = (a + b - 1)/(b)
​
So using above formula ---> ceil(sum/(i + 1)) = (sum + (i+1) - 1)/(i + 1) = (sum + i)/(i + 1).