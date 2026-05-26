# Write your MySQL query statement below
Select e.name as Employee
From Employee e 
Join Employee m 
On e.managerId=m.id and e.salary>m.salary;