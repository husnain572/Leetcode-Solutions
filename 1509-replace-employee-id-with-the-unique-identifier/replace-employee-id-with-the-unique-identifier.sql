-- Write your PostgreSQL query statement below
SELECT 
    EmployeeUNI.unique_id, 
    Employees.name
FROM 
    Employees
LEFT Join 
    EmployeeUNI
ON 
    EmployeeUNI.id = Employees.id;
