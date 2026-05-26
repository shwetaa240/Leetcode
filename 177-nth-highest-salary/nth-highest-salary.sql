CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN 
  Set N=N-1;
  RETURN (
      # Write your MySQL query statement below.
    Select distinct salary from Employee 
    Order By salary Desc 
    Limit 1  Offset N
  );
END