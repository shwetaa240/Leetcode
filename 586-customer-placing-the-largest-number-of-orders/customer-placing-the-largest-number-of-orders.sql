# Write your MySQL query statement below
Select customer_number From Orders
Group by customer_number Order By Count(customer_number) desc
limit 1;