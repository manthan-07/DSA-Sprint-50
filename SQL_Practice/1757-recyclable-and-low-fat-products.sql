-- LeetCode 1757: Recyclable and Low Fat Products
-- Approach: Filter rows where both conditions are true

SELECT product_id
FROM Products
WHERE low_fats = 'Y' AND recyclable = 'Y';
