# Write your MySQL query statement below
SELECT DISTINCT user_id, COUNT(follower_id) AS followers_count 
FROM Followers GROUP BY user_id HAVING COUNT(follower_id) ORDER BY user_id ASC