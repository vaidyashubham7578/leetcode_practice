# Write your MySQL query statement below
SELECT S.student_id, S.student_name, Sub.subject_name, 
COUNT(S.student_id=E.student_id) as attended_exams
FROM Students as S CROSS JOIN Subjects as Sub LEFT JOIN Examinations as E
ON S.student_id=E.student_id AND E.subject_name=Sub.subject_name 
GROUP BY S.student_id, S.student_name, Sub.subject_name 
ORDER BY S.student_id, Sub.subject_name;