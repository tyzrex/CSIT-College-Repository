CREATE DATABASE DBSulav;

CREATE TABLE department
(
    dept_id INT PRIMARY KEY IDENTITY,
    dept_name VARCHAR(50) NOT NULL 
);

CREATE TABLE designation(
    desig_id INT PRIMARY KEY IDENTITY,
    desig_name VARCHAR(50) NOT NULL
);

CREATE TABLE employee_type(
    emp_type_id INT PRIMARY KEY IDENTITY,
    emp_type_name VARCHAR(50) NOT NULL
);

CREATE TABLE project(
    proj_id INT PRIMARY KEY IDENTITY,
    proj_name VARCHAR(50) NOT NULL,
    start_date DATE NOT NULL,
    end_date DATE NOT NULL,
);

CREATE TABLE empolyee(
    emp_id INT PRIMARY KEY IDENTITY,
    emp_name VARCHAR(50) NOT NULL,
    emp_address VARCHAR(50) NOT NULL,
    emp_contact VARCHAR(50) UNIQUE NOT NULL,
    emp_salary DECIMAL(10,2) NOT NULL,
    dept_id INT FOREIGN KEY REFERENCES department(dept_id),
    desig_id INT FOREIGN KEY REFERENCES designation(desig_id),
    emptype_id INT FOREIGN KEY REFERENCES employee_type(emptype_id),
    proj_id INT FOREIGN KEY REFERENCES project(proj_id),
);

