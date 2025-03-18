<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# C - Variadic Functions

## 📌 Introduction
This project introduces the concept of **variadic functions** in C, which allow you to pass a variable number of arguments to a function. You will learn how to work with macros such as `va_start`, `va_arg`, and `va_end`, and how to utilize the `const` type qualifier to manage and manipulate variable arguments efficiently.

---

## 📚 Resources
Check out these resources to get a deeper understanding of variadic functions:

- [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)
- [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
- [Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)  
**man** or **help**
- `stdarg`

---

## 🎯 Learning Objectives
By the end of this project, you should be able to explain to anyone, without the help of Google:

- ✅ What variadic functions are and how to use them.
- ✅ How to use the `va_start`, `va_arg`, and `va_end` macros for processing variable arguments.
- ✅ Why and how to use the `const` type qualifier in function definitions.

---

## 📋 Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`.
- Compilation on **Ubuntu 20.04 LTS** using:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files must end with a new line.
- A `README.md` file at the root of the project folder is **mandatory**.
- Your code must follow **Betty style** — checked with `betty-style.pl` and `betty-doc.pl`.
- **Global variables are forbidden**.
- No more than **5 functions per file**.
- Only the following C standard library functions are allowed: `malloc`, `free`, and `exit`.
  - ❌ Forbidden: `printf`, `puts`, `calloc`, `realloc`, etc.
- You are allowed to use `_putchar`.
  - Do not push `_putchar.c`. We will use our own version during evaluation.
- `main.c` files shown in examples are for **testing only** and should not be pushed.
- All function prototypes, including `_putchar`, must be in a header file named `variadic_functions.h`.
- All header files must be **include guarded**.

---

## 🧠 Key Concepts Covered
- Defining and implementing variadic functions.
- Using `va_start`, `va_arg`, and `va_end` for handling variable arguments.
- Using `const` to ensure that arguments are not inadvertently modified.
- Practical examples like formatting strings or summing multiple integers.

---



---

## 👤 Author
👨‍💻 **[P-Y74](https://github.com/P-Y74)** – Holberton School Student

---

