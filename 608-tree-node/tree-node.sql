# Write your MySQL query statement below
Select id, 
Case
   When p_id is NULL Then 'Root'
   When id in (Select Distinct p_id From Tree Where p_id) Then 'Inner'
   Else 'Leaf' 
End as type
From Tree;