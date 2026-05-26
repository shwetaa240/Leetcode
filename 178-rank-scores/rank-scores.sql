SELECT s1.score,
       (Select count(Distinct s2.score)
       From Scores s2 Where s2.score>=s1.score) as 'rank'
FROM Scores s1 Order BY s1.score DESC;