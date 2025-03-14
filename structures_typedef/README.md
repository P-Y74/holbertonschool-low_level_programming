<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# C - Structures, typedef

## 📌 Introduction
In this project, you will learn how to use structures in C to group related data together, how to define new types with `typedef`, and how to manage dynamic memory using structs. These skills are essential for organizing complex data and working with dynamic structures in C.

---

## 📚 Resources
To successfully complete this project, make sure to read or watch the following resources:

- 0x0d. Structures.pdf (Holberton School property)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Documentation on structures in C](https://github.com/hs-hq/Betty/wiki/Documentation:-Data-structures)
- 0x0d. Typedef and structures.pdf (Holberton School property)
- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
- _Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189_
- _The Lost Art of C Structure Packing_ (Advanced - not mandatory)

---

## 🎯 Learning Objectives
By the end of this project, you should be able to explain to anyone, without the help of Google:

### General
- ✅ What structures are, when, why, and how to use them.
- ✅ How to use `typedef` to define new types in C.

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
- The only C standard library functions allowed are `printf`, `malloc`, `free`, and `exit`.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do, we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples.
- Don’t forget to push your **header file**.
- All your header files should be **include guarded** to prevent double inclusion.

---

## 📂 Project Files

| File                | Description                                                                                           |
|---------------------|-------------------------------------------------------------------------------------------------------|
| `1-init_dog.c`      | **Initializes a variable of type `struct dog`.** Sets up a `dog` structure with default values.       |
| `2-print_dog.c`     | **Prints a `struct dog`.** Displays the details of the `dog` structure to the standard output.         |
| `4-new_dog.c`       | **Creates a new `dog` using dynamic memory.** Allocates memory for a `dog` and initializes its fields. |
| `5-free_dog.c`      | **Frees the memory allocated for a `dog`.** Implements a check for `NULL` before freeing memory to prevent errors. |
| `dog.h`             | **Header file with function prototypes for the project, including the prototype for `free_dog`.**      |

---

## 👤 Author
👨‍💻 **[P-Y74](https://github.com/P-Y74)** - Holberton School Student
