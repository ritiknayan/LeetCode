# Write your MySQL query statement below
 select * from cinema c
where c.description != 'boring' and c.id mod 2 != 0
group by c.rating 
order by c.rating desc