-- Create tables
-- Make a student table
-- Make a Library table
-- Make a Fees table
-- Create table with proper relations.


USE student;

CREATE TABLE Student (
    id INT PRIMARY KEY AUTO_INCREMENT,
    roll INT,
    name VARCHAR(40),
    department VARCHAR(30)
);

CREATE TABLE Library (
    id INT PRIMARY KEY AUTO_INCREMENT,
    book_name VARCHAR(40),
    author VARCHAR(40),
    publisher VARCHAR(40)
);
CREATE TABLE Fees (
    id INT PRIMARY KEY AUTO_INCREMENT,
    student_id INT,
    book_id INT,
    fee_amount DECIMAL(10, 2),
    due_date DATE
);