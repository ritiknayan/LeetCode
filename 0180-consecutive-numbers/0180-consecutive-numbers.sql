# Write your MySQL query statement below
-- select distinct l1.num as ConsecutiveNums
-- from  Logs l1, Logs l2, Logs l3
-- where l1.id = l2.id -1 and l2.id = l3.id - 1
-- and l1.num = l2.num and l2.num = l3.num

WITH ConsecutiveLogs AS (
    SELECT num,
           LAG(num, 1) OVER (ORDER BY id) AS prev1,
           LAG(num, 2) OVER (ORDER BY id) AS prev2
    FROM Logs
)
SELECT DISTINCT num AS ConsecutiveNums
FROM ConsecutiveLogs
WHERE num = prev1
  AND num = prev2;

