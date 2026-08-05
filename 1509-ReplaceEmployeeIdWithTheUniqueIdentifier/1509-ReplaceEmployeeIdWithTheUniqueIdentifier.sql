-- Last updated: 8/5/2026, 10:00:44 AM
# Write your MySQL query statement below
select e.unique_id, em.name from
Employees em left join EmployeeUNI e
on em.id = e.id