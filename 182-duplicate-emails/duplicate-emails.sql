/* Write your PL/SQL query statement below */
Select email as Email 
FROM Person 
Group by email Having Count(email)>1; 