-- Last updated: 8/3/2026, 1:16:06 PM
# Write your MySQL query statement below
select c.name as Customers
from Customers c left join Orders o
on c.id = o.customerId
where o.id is null 