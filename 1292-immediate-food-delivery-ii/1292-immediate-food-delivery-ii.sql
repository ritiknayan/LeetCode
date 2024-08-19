# Write your MySQL query statement below
-- select round(sum(if(min_order_date=min_customer_pref_delivery_date,1,0)*100)/count(min_order_date) ,2) as immediate_percentage
-- from
-- (select delivery_id ,
--  customer_id , 
--  min(order_date) as min_order_date,
--  min(customer_pref_delivery_date) as min_customer_pref_delivery_date
--  from delivery
--  group by customer_id) as new_table
SELECT 
    ROUND(SUM(IF(order_date = customer_pref_delivery_date, 1, 0)) * 100.0 / COUNT(*), 2) AS immediate_percentage
FROM 
    (SELECT 
         customer_id, 
         MIN(order_date) AS first_order_date
     FROM 
         Delivery
     GROUP BY 
         customer_id) AS first_orders
JOIN 
    Delivery ON first_orders.customer_id = Delivery.customer_id 
              AND first_orders.first_order_date = Delivery.order_date;


