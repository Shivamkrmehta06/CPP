# Write your MySQL query statement below
select name As Employee from employee e1 where salary > (select salary from employee e2 where e2.id=e1.managerId)