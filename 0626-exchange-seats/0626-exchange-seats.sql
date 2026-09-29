# Write your MySQL query statement below
SELECT IF(id<(SELECT MAX(id)FROM Seat), #first if (checks whether the id iterating is less than 5 or not and) if true- then next if(checks even or odd, even-backward, odd-ahead ), next if(checks for the last ie 5 id so it gives id==5)
        IF(id%2=0,id-1,id+1),
        IF(id%2=0,id-1,id)) AS id, student FROM Seat 
ORDER BY id;