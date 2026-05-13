-- LeetCode 584: Find Customer Referee
-- Approach: Select customers not referred by id 2 or with no referee

SELECT name
FROM Customer
WHERE referee_id != 2 OR referee_id IS NULL;
