# Write your MySQL query statement below
SELECT 
    user_id, 
    name, 
    mail
FROM 
    users
WHERE 
    mail REGEXP '^[a-zA-Z][a-zA-Z0-9_.-]*@leetcode\\.com$' 
    AND mail LIKE BINARY '%@leetcode.com';
#here REGEXP is used for searching specific details, and also ^[a-zA-Z] is used to mandate the starting to be letters only, [a-zA-Z0-9_.-] the mail can contain this range of symbols and letters, *@leetcode[.]com$ mandating as per the question, and also [.] treats as literal dot.