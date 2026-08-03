-- Last updated: 8/3/2026, 1:16:09 PM
# Write your MySQL query statement below
select email as Email from Person
group by email 
having count(*)>1;