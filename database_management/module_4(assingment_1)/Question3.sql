-- In MySQL, Update and Delete query wasn’t executing, what was the reason and how to run those query? Write the code to enable the feature. (If you followed the class, you should know this).


USE student;

SET SQL_SAFE_UPDATES=0;


UPDATE Student SET department = 'Computer Science' WHERE id = 1;

DELETE FROM Fees WHERE student_id = 2;


SET SQL_SAFE_UPDATES=1;