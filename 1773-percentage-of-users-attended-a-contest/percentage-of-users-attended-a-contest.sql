# Write your MySQL query statement below
SELECT R.contest_id, ROUND(COUNT(R.user_id)*100/(SELECT COUNT(user_id) FROM Users),2)
as percentage
FROM Users as U RIGHT JOIN Register as R
ON U.user_id=R.user_id GROUP BY R.contest_id ORDER BY percentage DESC, contest_id ASC