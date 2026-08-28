# Write your MySQL query statement below
SELECT
    IF(id % 2 = 1 AND id = (SELECT MAX(id) FROM Seat), id, 
       IF(id % 2 = 1, id + 1, id - 1)) AS id,
    student
FROM Seat
ORDER BY id;