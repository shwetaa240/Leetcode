# Write your MySQL query statement below
Select v.customer_id, Count(*) as count_no_trans
From Visits v 
LEFT JOIN Transactions t    
On v.visit_id=t.visit_id 
WHERE t.transaction_id is NULL 
Group By Customer_id;