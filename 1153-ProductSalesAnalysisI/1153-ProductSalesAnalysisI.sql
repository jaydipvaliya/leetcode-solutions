-- Last updated: 8/5/2026, 10:00:57 AM
# Write your MySQL query statement below
select p.product_name, s.year, s.price from 
Sales s left join Product p 
on s.product_id = p.product_id
