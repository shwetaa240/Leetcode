# Write your MySQL query statement below
Select c.name AS Customers 
FROM Customers c
Left Join Orders o 
On c.id=o.customerId WHERE o.id is Null;