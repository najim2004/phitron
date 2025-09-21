-- Add proper constraints with the No 1 question


USE student;

CREATE TABLE Student (
    id INT PRIMARY KEY AUTO_INCREMENT,
    roll INT NOT NULL CHECK (roll>0),
    name VARCHAR(40) NOT NULL CHECK(LENGTH(name)>=3),
    department VARCHAR(30) NOT NULL CHECK(LENGTH(department)>=3)
);

CREATE TABLE Library (
    id INT PRIMARY KEY AUTO_INCREMENT,
    book_name VARCHAR(40) NOT NULL CHECK(LENGTH(book_name)>=3),
    author VARCHAR(40) NOT NULL CHECK(LENGTH(author)>=3),
    publisher VARCHAR(40) NOT NULL CHECK(LENGTH(publisher)>=3)
);
CREATE TABLE Fees (
    id INT PRIMARY KEY AUTO_INCREMENT,
    student_id INT NOT NULL CHECK(student_id>0),
    book_id INT NOT NULL CHECK(book_id>0),
    fee_amount DECIMAL(10, 2) NOT NULL CHECK(fee_amount>0),
    due_date DATE NOT NULL CHECK(due_date>='2023-01-01')
);