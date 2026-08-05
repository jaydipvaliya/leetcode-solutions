-- Last updated: 8/5/2026, 10:00:51 AM
# Write your MySQL query statement below
select distinct author_id as id from Views
where author_id = viewer_id
order by id asc