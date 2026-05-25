/* Write your PL/SQL query statement below */
Select Distinct p1.email as Email 
FROM Person p1 
Join Person p2
ON p1.id<>p2.id and p1.email=p2.email;