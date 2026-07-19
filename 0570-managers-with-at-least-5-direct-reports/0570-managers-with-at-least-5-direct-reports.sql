# Write your MySQL query statement below
SELECT m.name 
FROM Employee m
JOIN Employee e
ON e.managerId=m.id
GROUP BY m.Id, m.name
HAVING COUNT(*)>=5;