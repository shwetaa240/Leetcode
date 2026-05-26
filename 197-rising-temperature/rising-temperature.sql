# Write your MySQL query statement below
Select today.id 
from Weather yesterday,Weather today 
WHERE datediff(today.recordDate,yesterday.recordDate)=1 and yesterday.temperature<today.temperature;