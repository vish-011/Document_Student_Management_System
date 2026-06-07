# Student Record Management System

## Overview

This is a simple C program that allows users to enter student details and store them in a text file named `student.txt`.

The program collects the following information for each student:

* Name
* Age
* CGPA
* Roll Number

All records are appended to the file, ensuring that previously stored data is preserved.

---

## Features

* Stores student information in a text file.
* Supports multiple student entries in a single execution.
* Allows users to manually assign roll numbers.
* Uses file handling functions such as `fopen()`, `fprintf()`, and `fclose()`.
* Preserves existing records using append mode (`a+`).
* Handles names containing spaces using `fgets()`.

---

## Technologies Used

* C Programming Language
* Standard Libraries:

  * `stdio.h`
  * `string.h`
  * `stdlib.h`

---

## How the Program Works

1. Opens (or creates) `student.txt` in append mode.
2. Prompts the user to enter:

   * Student Name
   * Age
   * CGPA
   * Roll Number
3. Writes the information to the file.
4. Asks whether the user wants to add another student.
5. Repeats until the user enters `n` or `N`.
6. Closes the file before terminating.

---

## Compilation

Using GCC:

```bash
gcc student.c -o student
```

---

## Running the Program

### Linux / macOS

```bash
./student
```

### Windows

```cmd
student.exe
```

---

## Sample Input

```text
Enter the name: John Doe
Enter the age: 20
Enter the CGPA: 8.5
Enter the Roll Number: 101
Do you want to add more students(y/n): n
```

---

## Sample Output (student.txt)

```text
Name: John Doe
Age: 20
CGPA: 8.500000
Roll Number: 101
```

---

## File Mode

The file is opened using:

```c
fopen("student.txt", "a+");
```

### Meaning

* `a` → Append data to the end of the file.
* `+` → Allows both reading and writing.

This ensures that existing student records are not overwritten.

---

## Project Structure

```text
.
├── student.c
├── student.txt
└── README.md
```

---

## Limitations

* Roll numbers are entered manually and are not validated for uniqueness.
* No input validation for age or CGPA.
* Student records are stored as plain text rather than structured data.
* The program currently supports only adding records; it cannot search, edit, or delete them.

---

## Future Improvements

* Automatically generate unique roll numbers.
* Validate user input.
* Implement search functionality.
* Update and delete student records.
* Store student data using structures and binary files.
* Add a menu-driven interface.

---

## Learning Concepts Demonstrated

* File Handling in C
* User Input Processing
* String Manipulation
* Loops and Conditional Statements
* Text File Operations

---

## Author

A beginner C programming project created for practicing file handling and user input management.
