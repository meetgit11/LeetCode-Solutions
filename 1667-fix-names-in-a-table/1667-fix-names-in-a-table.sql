# Write your MySQL query statement below
SELECT user_id, CONCAT(
    UPPER(LEFT(name, 1)), #LEFT takes the leftmost character of text from Name column UPPER(Left(columname,1)) 1 SPECIFIES the character affected
    LOWER(SUBSTRING(name,2)) #lower is applied to substring of Name column after 1st character in the text
) AS name
FROM Users
ORDER BY user_id;