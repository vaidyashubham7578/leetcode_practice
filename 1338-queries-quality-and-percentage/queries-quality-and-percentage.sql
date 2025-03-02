# Write your MySQL query statement below
SELECT DISTINCT query_name, ROUND(SUM(rating/position)/COUNT(position),2) as quality, ROUND((SUM(rating<3)*100)/COUNT(position),2) as poor_query_percentage
FROM Queries GROUP BY query_name


-- SUM(rating<3) means rating add up 