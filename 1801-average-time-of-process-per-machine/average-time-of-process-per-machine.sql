# Write your MySQL query statement below
SELECT a.machine_id, ROUND(AVG(b.timestamp-a.timestamp),3) as processing_time
FROM Activity as a INNER JOIN Activity as b
WHERE a.process_id=b.process_id 
AND a.machine_id=b.machine_id 
AND a.timestamp<b.timestamp
GROUP BY machine_id

