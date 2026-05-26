# Write your MySQL query statement below
Select  d.name AS Department,
    e.name AS Employee,
    e.salary AS Salary
from Employee e
left join Department d 
on e.departmentId=d.id
WHERE
    (
        SELECT COUNT(DISTINCT salary)
        FROM Employee e2
        WHERE e2.departmentId = e.departmentId AND e2.salary >= e.salary
    ) <= 3
ORDER BY
    Department;
;