# Write your MySQL query statement below
select max(salary) secondhighestsalary
from employee 
where salary < (select max(salary)from employee)