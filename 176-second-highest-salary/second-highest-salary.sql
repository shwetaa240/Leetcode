# Write your MySQL query statement below
Select Max(salary) as SecondHighestSalary
FROM Employee 
WHERE salary<(Select max(salary) from employee); 