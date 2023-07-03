#### Lab Assignment

#### Database Management System

---

###### Question 1

Create a database with your name eg. DBSulav

###### Solution

###### <u>Query:</u>

```sql
CREATE DATABASE DBSulav;
```

---

###### Question 2

Create following table with necessary constraints
a. Department table with attributes dept_id(pk, identity), dept_name (not null)
b. Designation table with attributes desig_id (pk, identity), desig_name (not null)
c. Employee_type table with attributes emptype_id(pk, identity), emptype_name (not null)
d. Project table with attributes proj_id(pk, identity), porj_name (not null), start_date, deadline
e. Employee table with attributes emp_id (pk, identity), emp_name (not null), emp_address (not null), emp_contact(unique), emp_salary,dept_id (fk), desig_id (fk), emptype_id (fk), proj_id(fk)

###### Solution

###### <u>Query</u>

```sql
CREATE TABLE department
(
dept_id SERIAL PRIMARY KEY,
dept_name VARCHAR(50) NOT NULL
);

CREATE TABLE designation(
desig_id SERIAL PRIMARY KEY,
desig_name VARCHAR(50) NOT NULL
);

CREATE TABLE employee_type(
emp_type_id SERIAL PRIMARY KEY,
emp_type_name VARCHAR(50) NOT NULL
);

CREATE TABLE project(
proj_id SERIAL PRIMARY KEY,
proj_name VARCHAR(50) NOT NULL,
start_date DATE NOT NULL,
end_date DATE NOT NULL
);

CREATE TABLE empolyee(
emp_id SERIAL PRIMARY KEY,
emp_name VARCHAR(50) NOT NULL,
emp_address VARCHAR(50) NOT NULL,
emp_contact VARCHAR(50) UNIQUE NOT NULL,
emp_salary DECIMAL(10,2) NOT NULL,
dept_id INT REFERENCES department(dept_id),
desig_id INT REFERENCES designation(desig_id),
emptype_id INT REFERENCES employee_type(emp_type_id),
proj_id INT REFERENCES project(proj_id)
);
```

---

###### Question 3

Insert the record on all the tables you just created with appropriate values.

###### Solution

###### <u>Query:</u>

```sql
-- Insert records into Department table
INSERT INTO department (dept_name) VALUES
('Sales'),
('Marketing'),
('Engineering');

-- Insert records into Designation table
INSERT INTO designation (desig_name) VALUES
('Manager'),
('Assistant Manager'),
('Engineer');

-- Insert records into Employee_type table
INSERT INTO employee_type (emp_type_name) VALUES
('Full-time'),
('Part-time'),
('Contractor');

-- Insert records into Project table
INSERT INTO project (proj_name, start_date, end_date) VALUES
('Project A', '2023-01-01', '2023-06-30'),
('Project B', '2023-02-15', '2023-08-31'),
('Project C', '2023-04-01', '2023-11-30');

-- Insert records into Employee table
INSERT INTO empolyee (emp_name, emp_address, emp_contact, emp_salary, dept_id, desig_id, emptype_id, proj_id) VALUES
('John Doe', '123 Main Street', '555-1234', 50000.00, 1, 1, 1, 1),
('Jane Smith', '456 Oak Avenue', '555-5678', 40000.00, 2, 2, 2, 2),
('Bob Johnson', '789 Elm Road', '555-9012', 60000.00, 3, 3, 3, 3);
```

