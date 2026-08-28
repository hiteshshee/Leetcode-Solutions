# Write your MySQL query statement below
select results
from (
    select name as results
    from users
    join movierating on users.user_id = movierating.user_id
    group by users.user_id, users.name
    order by count(*) desc, name
    limit 1
) a

union all

select results
from (
    select title as results
    from movies
    join movierating on movies.movie_id = movierating.movie_id
    where created_at >= '2020-02-01'
      and created_at < '2020-03-01'
    group by movies.movie_id, movies.title
    order by avg(rating) desc, title
    limit 1
) b;