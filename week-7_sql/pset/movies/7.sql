SELECT title, rating FROM movies JOIN ratings ON rating WHERE movie_id = id AND year = 2010 ORDER BY rating DESC, title ASC;
