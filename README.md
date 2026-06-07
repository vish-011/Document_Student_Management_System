# Student Record Management System (C)

## Overview

This is a simple C program that allows users to enter student information and store it in a text file. The program uses file handling functions to append student records to a file named `student.txt`.

Each student record contains:

* Name
* Age
* CGPA
* Roll Number

The program continues accepting student records until the user chooses to stop.

---

## Features

* Accepts multiple student records.
* Stores data in a text file.
* Automatically assigns roll numbers during program execution.
* Uses file handling (`fopen`, `fprintf`, `fclose`).
* Demonstrates string handling with `fgets()` and `strcspn()`.

---

## Technologies Used

* C Programming Language
* Standard C Libraries:

  * `stdio.h`
  * `string.h`
  * `stdlib.h`

---

## How It Works

1. Opens or creates a file named `student.txt` in append mode (`a+`).
2. Prompts the user to enter:

   * Student Name
   * Age
   * CGPA
3. Assigns a roll number.
4. Saves the information to the file.
5. Asks whether another student record should be added.
6. Repeats until the user enters `n`.
7. Closes the file safely.

---

## Compilation

Using GCC:

```bash
gcc student.c -o student
```

---

## Running the Program

```bash
./student
```

For Windows:

```cmd
student.exe
```

---

## Example

### Input

```text
Enter the name: John Doe
Enter the age: 20
Enter the CGPA: 8.5
Do you want to add more students: (y/n) n
```

### Output Stored in student.txt

```text
Name: John Doe
Age: 20
CGPA: 8.500000
Roll Number: 1
```

---

## File Mode Used

```c
fopen("student.txt", "a+");
```

* `a` → Append data to the end of the file.
* `+` → Allows both reading and writing.

Existing data in the file is preserved.

---

## Limitations

* Roll numbers restart from 1 each time the program is executed.
* Student records are stored as plain text instead of structured data.
* No validation for invalid age or CGPA values.

---

## Future Improvements

* Generate unique roll numbers across multiple program runs.
* Add functionality to search, update, and delete student records.
* Store records in binary format using `fwrite()` and `fread()`.
* Add input validation and error handling.

---

## Author

Created as a practice project to learn:

* C Programming
* File Handling
* User Input Management
