# School Management System (CLI) – C++

This project is a **Command-Line Interface (CLI) School Management System** written in C++. It allows a user (teacher or administrator) to manage student data efficiently in a simple console environment. The system demonstrates the use of **C++ fundamentals** such as structs, vectors, loops, conditional statements, functions, and basic input/output.  

The main features of this system include:  
- **Add Student** – Add a new student with their name, age, and grade.  
- **Display Students** – Show all students currently in the system.  
- **Search Student** – Search for a student by name and display their details.  
- **Calculate Average, Highest & Lowest Grade** – Quickly see class performance statistics.  
- **Delete Student** – Remove a student by name.  
- **Exit** – Close the program gracefully.  

The system is entirely CLI-based, making it lightweight and perfect for learning C++ fundamentals while practicing data structures and control flow logic.

---

## Features in Detail

1. **Add Student**  
   - Users input a student’s name, age, and grade.  
   - The student is added to a vector of `STUDENT` structs.  

2. **Display Students**  
   - Iterates over the vector and prints each student’s details.  
   - Displays a message if there are no students yet.  

3. **Search Student**  
   - Prompts the user to enter a student’s name.  
   - Uses a loop and conditional statements to find the student.  
   - Displays the student’s info if found; otherwise, notifies the user.  

4. **Calculate Average, Highest & Lowest Grade**  
   - Loops through all students and calculates the average grade.  
   - Determines the highest and lowest grades in the class.  
   - Displays all three statistics to the user.  

5. **Delete Student**  
   - Prompts the user to enter a student’s name.  
   - Searches the vector and removes the student if found.  
   - Confirms deletion or reports if the student does not exist.  

6. **Exit**  
   - Ends the program when the user chooses this option.  

---

## Technologies Used

- **Language:** C++  
- **Data Structures:** Structs, Vectors  
- **Control Flow:** Loops, Conditionals, Switch Statements  
- **I/O:** `cin`, `cout`  

---

## How to Run

1. Copy the source code into a C++ compiler or IDE (e.g., Code::Blocks, Visual Studio, or an online compiler).  
2. Compile and run the program.  
3. Use the menu options to manage students.  

---

## Learning Outcomes

By completing this project, you will:  

- Gain hands-on experience with **C++ basics** and **data structures**.  
- Understand **vector manipulation**, including adding and deleting elements.  
- Learn to calculate statistics (average, min, max) on a dataset.  
- Practice designing a **menu-driven console application**.  

---


