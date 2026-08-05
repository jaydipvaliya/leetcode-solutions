-- Last updated: 8/5/2026, 10:01:10 AM
# Write your MySQL query statement below
UPDATE salary SET sex =
CASE sex
    WHEN 'm' THEN 'f'
    ELSE 'm'
END;