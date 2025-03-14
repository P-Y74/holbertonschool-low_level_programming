<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# C - More malloc, free

## 📌 Introduction
This project extends your knowledge of dynamic memory allocation in C. You will learn how to use the `calloc` and `realloc` functions, handle memory allocation errors with `exit`, and improve your memory management skills.

---

## 📚 Resources
To successfully complete this project, make sure to read or watch the following materials:

- [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/should-i-cast-the-result-of-malloc-in-c)
**man** or **help**:
  - `exit (3)`
  - `calloc`
  - `realloc`

---

## 🎯 Learning Objectives
By the end of this project, you should be able to explain to anyone, without the help of Google:

### General
- ✅ How to use the `exit` function to terminate a program in case of errors.
- ✅ What `calloc` and `realloc` do, how to use them, and how they differ from `malloc`.

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
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden.
- You are allowed to use `_putchar`. You don’t have to push `_putchar.c`, we will use our file. If you do it, it won’t be taken into account.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do, we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.
- Don’t forget to push your **header file**.

---

## 📂 Project Files

| File                | Description                                                                                           |
|---------------------|-------------------------------------------------------------------------------------------------------|
| `0-malloc_checked.c` | **Allocates memory using `malloc`. If allocation fails, it terminates the program using `exit`.**      |
| `1-string_nconcat.c` | **Concatenates two strings, using `n` bytes from the second string.**                                |
| `2-calloc.c`         | **Allocates and initializes memory for an array using `malloc` and sets all bytes to 0 using `calloc`.** |
| `3-array_range.c`    | **Creates an array of integers from `min` to `max` inclusive using `malloc` and returns a pointer to it.** |
| `main.h`             | **Header file with function prototypes for the project, including the prototype for `*_realloc`.**     |

---

## 👤 Author
👨‍💻 **[P-Y74](https://github.com/P-Y74)** - Holberton School Student
