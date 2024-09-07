# Write your MySQL query statement below

-- select customer_id from

-- (select customer_id 
-- from customer
-- group by customer_id
-- having count( distinct product_key) = 2 ) as t

WITH TotalProducts AS (
    SELECT COUNT(DISTINCT product_key) AS product_count
    FROM Product
),
CustomerProductCount AS (
    SELECT customer_id, COUNT(DISTINCT product_key) AS product_count
    FROM Customer
    GROUP BY customer_id
)
SELECT customer_id
FROM CustomerProductCount, TotalProducts
WHERE CustomerProductCount.product_count = TotalProducts.product_count;

