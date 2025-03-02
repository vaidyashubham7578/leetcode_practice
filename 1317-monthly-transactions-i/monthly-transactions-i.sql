# Write your MySQL query statement below
SELECT date_format(trans_date, '%Y-%m') as month,
country, COUNT(id) as trans_count,
SUM(state='approved') as approved_count, 
SUM(amount) as trans_total_amount,
SUM(IF(state='approved', amount, 0)) as approved_total_amount
FROM Transactions GROUP BY month, country
