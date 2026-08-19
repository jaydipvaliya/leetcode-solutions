-- Last updated: 8/19/2026, 1:22:06 PM
# Write your MySQL query statement below
SELECT teacher_id,
       COUNT(DISTINCT subject_id) AS cnt
FROM Teacher
GROUP BY teacher_id;