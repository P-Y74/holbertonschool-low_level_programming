<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# 📂 C - Singly Linked Lists

## 📌 Project Overview

This project introduces **singly linked lists** in C — an essential data structure in low-level programming.  
You’ll learn when and why to use linked lists over arrays, how to build them from scratch, and how to manipulate them effectively through pointer operations.

---

## 🗂️ Table of Contents

- [Learning Objectives](#-learning-objectives)
- [Requirements](#-requirements)
- [Project Files](#-project-files)
- [Tips for Success](#-tips-for-success)
- [License](#-license)

---

## 🎯 Learning Objectives

- Understand the differences between linked lists and arrays — and when to use each.
- Learn how to create and manipulate singly linked lists using dynamic memory allocation.
- Practice struct-based programming and pointer handling in C.

---

## ✅ Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation on **Ubuntu 20.04 LTS** using:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files must end with a new line
- Code must comply with **Betty** style (check with `betty-style.pl` and `betty-doc.pl`)
- No global variables
- No more than 5 functions per file
- Only allowed standard C functions: `malloc`, `free`, and `exit`
- You may use `_putchar` (no need to push `_putchar.c`)
- All function prototypes must be in the `lists.h` header file
- Header files must be protected with include guards

> 💡 In tests, `main.c` files are provided as examples. Use them to test locally, but do not push them — they won’t be considered during evaluation.

---

## 🧩 Data Structure Used

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

---

## 📁 Project Files

| File Name                  | Description                                                                 |
|---------------------------|-----------------------------------------------------------------------------|
| `0-print_list.c`           | Prints all the elements of a `list_t` list                                 |
| `1-list_len.c`             | Returns the number of elements in a `list_t` list                          |
| `2-add_node.c`             | Adds a new node at the beginning of a `list_t` list                        |
| `3-add_node_end.c`         | Adds a new node at the end of a `list_t` list                              |
| `4-free_list.c`            | Frees a `list_t` list                                                      |
| `100-first.c`              | Executes before the main function using a constructor attribute            |
| `lists.h`                  | Header file containing structure and function prototypes                   |
| `README.md`                | This documentation file                                                    |

---

## 🚀 Tips for Success

- 🔁 **Traverse carefully**: Always check for `NULL` pointers during list operations.
- 🧠 **Manage memory**: Allocate and free memory properly to avoid leaks.
- 🧪 **Edge case testing**: Try empty lists, short strings, and `NULL` inputs.
- 🧼 **Protect memory**: Use include guards and validate all memory access.

---

## 📝 License

This project is part of the **Holberton School** curriculum  
and is intended for **educational purposes only**.
