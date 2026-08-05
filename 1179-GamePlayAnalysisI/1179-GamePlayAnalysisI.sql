-- Last updated: 8/5/2026, 10:00:55 AM
# Write your MySQL query statement below
select player_id , min(event_date) as first_login 
from Activity 
group by player_id 