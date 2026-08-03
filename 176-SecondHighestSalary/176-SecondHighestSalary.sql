-- Last updated: 8/3/2026, 1:16:16 PM
# Write your MySQL query statement below
select max(salary) as SecondHighestSalary from Employee 
where salary<(select max(salary) from Employee)