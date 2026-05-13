-- LeetCode 595: Big Countries
-- Approach: Filter countries by area or population

SELECT name, population, area
FROM World
WHERE area >= 3000000 OR population >= 25000000;
