# Write your MySQL query statement below
select name , population , area 
from World as big_countries
where area >= 3000000 or population >= 25000000;