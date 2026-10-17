# Write your MySQL query statement below
SELECT sell_date, COUNT(DISTINCT product) AS num_sold, GROUP_CONCAT(DISTINCT product ORDER BY product ASC SEPARATOR ',') AS products #this creates a concat column of all products separated by , and in order of ascending order.
FROM Activities 
GROUP BY sell_date
ORDER BY sell_date ASC;