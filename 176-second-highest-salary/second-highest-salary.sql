# Write your MySQL query statement below
Select 
(Select Distinct salary 
FROM Employee 
Order BY salary DESC
Limit 1 Offset 1) 
as SecondHighestSalary; 