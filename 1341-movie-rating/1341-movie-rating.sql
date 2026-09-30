# Write your MySQL query statement below
#first section of the output
SELECT name AS results FROM (
    SELECT  user_id, name, COUNT(*)
FROM Users JOIN MovieRating USING(user_id)
GROUP BY user_id, name
ORDER BY 3 DESC, name ASC
LIMIT 1) users

UNION ALL
# union for appending rows, and Joins for appending columns
#second section of the output
SELECT title AS results FROM(
SELECT movie_id, title, AVG(rating)
FROM Movies JOIN MovieRating USING(movie_id)
WHERE DATE_FORMAT(created_at, '%Y-%m')='2020-02'
GROUP BY movie_id, title
ORDER BY 3 DESC, 2 ASC
LIMIT 1)movies;