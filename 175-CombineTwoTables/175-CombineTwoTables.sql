-- Last updated: 8/3/2026, 1:16:19 PM
# Write your MySQL query statement below
select p.firstName, p.lastName, a.city, a.state
from Person p left join Address a 
on p.personId = a.personId