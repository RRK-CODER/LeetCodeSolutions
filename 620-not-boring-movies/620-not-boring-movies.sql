# Write your MySQL query statement below
select id , movie , description , rating from cinema where cinema.id % 2 =1  and cinema.description <> "boring" ORDER BY CINEMA.RATING DESC;