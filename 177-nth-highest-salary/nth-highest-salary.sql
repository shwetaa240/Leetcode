CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN 
SET N=N;
  RETURN (
      # Write your MySQL query statement below.
    Select salary 
    from (Select salary,
    Dense_Rank() over(order by salary desc) as dr
    from Employee ) t
    WHERE dr=N Limit 1  
  );
END