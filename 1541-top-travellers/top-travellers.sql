# Write your MySQL query statement below
Select u.name,COALESCE(SUM(r.distance),0) AS travelled_distance 
FROM Users u Left Join Rides r
On u.id =r.user_id 
Group bY u.id Order by travelled_distance DESC,u.name ;