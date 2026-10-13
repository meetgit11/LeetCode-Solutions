# Write your MySQL query statement below

SELECT Department.Name AS "Department", e.name AS "Employee", e.Salary FROM(
    SELECT departmentId, name, salary, DENSE_RANK() OVER(PARTITION BY departmentId ORDER BY Salary DESC) AS R FROM Employee) e
JOIN Department ON e.departmentId=Department.id
WHERE r<=3;