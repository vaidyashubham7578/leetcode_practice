# Write your MySQL query statement below
-- SELECT name FROM Employee WHERE id IN (SELECT managerId FROM Employee 
-- GROUP BY managerId HAVING COUNT(*)>=5)
SELECT E1.name
FROM Employee as E1 INNER JOIN Employee as E2
ON E1.id=E2.managerId GROUP BY E2.managerId HAVING COUNT(*)>=5