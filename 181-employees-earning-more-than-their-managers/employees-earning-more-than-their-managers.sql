# Write your MySQL query statement below
select e.name as Employee from Employee as e join Employee as a on e.managerId=a.id where e.salary>a.salary;