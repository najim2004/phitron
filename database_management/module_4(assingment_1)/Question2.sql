USE student;

CREATE TABLE Student (
    id INT PRIMARY KEY AUTO_INCREMENT,
    roll INT NOT NULL CHECK (roll>0),
    name VARCHAR(40) NOT NULL CHECK(LENGTH(name)>=3),
    department VARCHAR(30) NOT NULL CHECK(LENGTH(department)>=3)
);
