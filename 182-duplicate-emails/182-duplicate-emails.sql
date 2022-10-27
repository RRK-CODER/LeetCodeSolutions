# Write your MySQL query statement below
Select Email
from Person
GROUP BY Email
HAVING COUNT(*) >1