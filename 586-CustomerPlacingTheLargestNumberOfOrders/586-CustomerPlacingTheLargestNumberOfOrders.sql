-- Last updated: 8/3/2026, 1:14:47 PM
# Write your MySQL query statement below
select customer_number from Orders
group by customer_number
order by count(*) desc 
limit 1