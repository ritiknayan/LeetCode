# Write your MySQL query statement below
-- SELECT 
--    round(COUNT(DISTINCT p1.player_id) / (SELECT COUNT(DISTINCT player_id) FROM activity),2) AS fraction
-- FROM 
--     activity p1
-- JOIN 
--     activity p2
-- ON 
--     p1.player_id = p2.player_id
-- AND 
--     DATEDIFF(p2.event_date, p1.event_date) = 1;
select round(sum(player_login)/count(distinct player_id),2) as fraction
from
(select player_id,
datediff(event_date, min(event_date) over (partition by player_id))=1 as player_login
from activity) as new_table