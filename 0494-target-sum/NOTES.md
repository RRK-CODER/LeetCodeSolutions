let S1 be the first subarray and S2 be the second subarray
S1 + S2 = sum
S1 - S2 = target
=> 2*S1 = sum + target
=> S1 = (sum + target)/2
​
example -> [1,1,1,1,1], target = 3
+1 + 1 + 1 + 1 - 1 = 3
here we can see that we are having two subarray
S1 =[1,1,1,1]
S2 =[1]
S1 - S2 = target // [1,1,1,1] - [1] -----------------equation(1)
S1 + S2 = sum // [1,1,1,1] + [1] -----------------equation(2)
by solving above two equation
=> S1 = (target+sum)/2 //new_target