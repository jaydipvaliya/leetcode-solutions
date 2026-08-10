-- Last updated: 8/10/2026, 1:19:56 PM
# Write your MySQL query statement below
select * from Cinema 
where id%2!=0 and description != "boring"
order by rating desc