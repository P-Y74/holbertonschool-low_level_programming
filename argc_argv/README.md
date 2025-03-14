<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# C - argc, argv

## 📌 Introduction
In this project, you will explore how to handle command-line arguments in C. You will learn to pass arguments to your program, work with the `argc` and `argv` parameters, and handle unused variables efficiently.

---

## 📚 Resources
To successfully complete this project, make sure to read or watch the following materials:

- [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- [argc and argv](https://crasseux.com/books/ctutorial/argc-and-argv.html)
- [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
- How to compile with unused variables (Web search)

---

## 🎯 Learning Objectives
By the end of this project, you should be able to explain to anyone, without the help of Google:

### General
- ✅ How to use arguments passed to your program using `argc` and `argv`.
- ✅ The two prototypes of `main` and the cases when you use each.
- ✅ How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters.

---

## 📋 Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- Compilation on **Ubuntu 20.04 LTS** using:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All your files should end with a new line.
- A `README.md` file at the root of the folder of the project is mandatory.
- Your code should use the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- You are not allowed to use **global variables**.
- No more than **5 functions per file**.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.
- Don’t forget to push your **header file**.
- You are allowed to use the **standard library**.

---

## 📂 Project Files

| File               | Description                                                                                      |
|--------------------|--------------------------------------------------------------------------------------------------|
| `0-whatsmyname.c`  | **Prints the program's name.** Displays the name of the program followed by a new line.            |
| `1-args.c`         | **Counts and displays the number of arguments passed to the program.** Shows how many arguments were provided. |
| `2-args.c`         | **Displays all arguments passed to the program.** Prints each argument one by one.                 |
| `3-mul.c`          | **Multiplies two numbers.** Takes two numeric arguments and prints their product.                 |
| `4-add.c`          | **Adds positive numbers.** Sums up all positive numbers provided as arguments and outputs the result. |

---

## 👤 Author
👨‍💻 **[P-Y74](https://github.com/P-Y74)** - Holberton School Student
