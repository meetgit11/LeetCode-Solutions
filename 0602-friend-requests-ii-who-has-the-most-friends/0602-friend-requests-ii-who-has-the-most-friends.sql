SELECT requester_id AS id, COUNT(*) AS num FROM
(SELECT requester_id FROM RequestAccepted
UNION ALL
SELECT accepter_id FROM RequestAccepted) ids #combining both columns requester_id and accepter_id from the table, selecting only one id and order by desc.

GROUP BY id
ORDER BY num DESC
LIMIT 1;