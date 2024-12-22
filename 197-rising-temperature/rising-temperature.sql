-- Write your PostgreSQL query statement below
with temporary_table as (select id, recordDate,Temperature,
lag(temperature,1) over (order by recordDate) as prev_temp, 
lag(recordDate,1) over (order by recordDate) as prev_recordDate 
from Weather)
select id from temporary_table where Temperature>prev_temp and (recordDate-prev_recordDate)=1