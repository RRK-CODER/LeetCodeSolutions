Intuition
For each time point, we can memoise the maximum profit we can get starting from that time. If we process our jobs from the most distant to the closest, we can calculate the maximum profit for the start time using the max profits for the job's end time.
​
**
​
Algorithm
Use a map to store job start times and the maximum profit (zero, initially).
Use an unordered map to store start time and job information.
We will use this unordered map to look-up jobs by their start time.
Since times in the map are sorted, process each time point right to left:
Lookup job information in the unordered map by the start time.
Set the maximum profit as the greater of:
Running maximum profit.
Job profit plus maximum profit at the end of the job.
Update the running maximum profit.
Return the running maximum profit.
Instead of using a hash map to store job information, we could pack it to the same map, like map<int, pair<int, vector<pair<int, int>>>> jobs;. It would probably be a good idea to define some struct for the value type, or readability would suffer.