SELECT (
    SELECT salary
    FROM (
        SELECT salary,
               DENSE_RANK() OVER(ORDER BY salary DESC) AS dr
        FROM Employee
    ) t
    WHERE dr = 2
    LIMIT 1
) AS SecondHighestSalary;