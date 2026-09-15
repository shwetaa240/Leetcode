# Write your MySQL query statement below
Select id, 
Case
   When p_id is NULL Then 'Root'
   When id Not in (Select Distinct p_id From Tree Where p_id is NOT null) Then 'Leaf' 
   Else 'Inner'
End as type
From Tree;