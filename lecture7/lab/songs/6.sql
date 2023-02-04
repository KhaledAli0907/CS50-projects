--SELECT name FROM songs WHERE artist_id = (SELECT id FROM artists Where name = 'Post Malone');
SELECT * FROM songs JOIN artist_id = artists.id WHERE name = 'Post Malone';