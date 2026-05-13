-- LeetCode 570: Managers with at Least 5 Direct Reports
-- Approach: Group employees by managerId and find managers with at least 5 reports

SELECT name
FROM Employee
WHERE id in (
  SELECT managerId
  FROM Employee 
  GROUP BY managerId 
  HAVING COUNT(managerId)>=5
);
