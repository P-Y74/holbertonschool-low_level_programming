<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# C - malloc, free

## 📌 Introduction
This project focuses on dynamic memory allocation in C using `malloc` and `free`. You will learn the basics of dynamic memory management, how to allocate memory during runtime, and how to free memory when it's no longer needed.

---

## 📚 Resources
To successfully complete this project, make sure to read or watch the following materials:

- [0x0a - malloc & free - quick overview.pdf](https://intranet.holbertonschool.com)
- [Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)](https://www.youtube.com/watch?v=xjVFb2ftA_M)

**man** or **help**:
  - `malloc`
  - `free`

---

## 🎯 Learning Objectives
By the end of this project, you should be able to explain to anyone, without the help of Google:

### General
- ✅ The difference between **automatic** and **dynamic** memory allocation.
- ✅ How to use `malloc` and `free` for dynamic memory management.
- ✅ When and why you should use **malloc**.
- ✅ How to use **valgrind** to check for memory leaks.

---

## 📋 Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`.
- Compilation on **Ubuntu 20.04 LTS** using:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All your files should end with a new line.
- A `README.md` file at the root of the folder of the project is mandatory.
- Your code should use the **Betty style**. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- You are not allowed to use **global variables**.
- No more than **5 functions per file**.
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden.
- You are allowed to use `_putchar`. You don’t have to push `_putchar.c`, we will use our file. If you do it, it won’t be taken into account.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do, we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.
- Don’t forget to push your **header file**.

---

## 📂 Project Files

| File               | Description                                                                                           |
|--------------------|-------------------------------------------------------------------------------------------------------|
| `0-create_array.c` | **Creates an array of chars and initializes it with a specific character.**                           |
| `1-strdup.c`       | **Returns a pointer to a newly allocated space in memory that contains a copy of the string.**        |
| `100-argstostr.c`  | **Joins all arguments passed to the program into a single string with newlines separating them.**      |
| `101-strtow.c`     | **Splits a string into words, returning an array of strings. Handles edge cases like count == 0.**     |
| `2-str_concat.c`   | **Concatenates two strings into a newly allocated space.**                                            |
| `3-alloc_grid.c`   | **Returns a pointer to a 2D array of integers, with each element initialized to 0.**                   |
| `4-free_grid.c`    | **Frees a 2D array previously allocated by `alloc_grid`.**                                           |
| `main.h`           | **Header file with function prototypes for the project.**                                             |

---

## 👤 Author
👨‍💻 **[P-Y74](https://github.com/P-Y74)** - Holberton School Student
