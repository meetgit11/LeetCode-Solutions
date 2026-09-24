# Write your MySQL query statement below
SELECT person_name
FROM (
    SELECT person_name, weight, turn, SUM(weight) OVER (ORDER BY turn) AS tsum
    FROM Queue
)sub #sub=temp_table_name, tsum=columnname for storing cumulative value of weight
WHERE tsum<=1000
ORDER BY turn DESC 
LIMIT 1;
#use order by desc limit to display the last value from the table
#inner select query characterize the outer query, so if want to display personname and use turn i need to use it in inner query..