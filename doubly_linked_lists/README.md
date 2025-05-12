<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# 📚 C - Doubly Linked Lists

## 🧠 General Description

This project is focused on understanding and manipulating **doubly linked lists** in C. A doubly linked list is a dynamic data structure where each node contains a reference to both the **next** and **previous** node in the sequence. This allows bidirectional traversal of data.

---

## 🧭 Table of Contents

- [🧠 General Description](#-general-description)
- [📌 Learning Objectives](#-learning-objectives)
- [⚙️ Requirements](#️-requirements)
- [🧾 Header File](#-header-file)
- [🗃️ Data Structure Used](#️-data-structure-used)
- [📁 Project Files](#-project-files)
- [🚀 Tips for Success](#-tips-for-success)
- [📝 License](#-license)

---

## 📌 Learning Objectives

- What is a doubly linked list?
- How to create and use a doubly linked list.
- How to add, remove, and traverse nodes efficiently.
- How to manage memory correctly (using `malloc` and `free`).
- How to look for information with minimal external help.

---

## ⚙️ Requirements

### ✅ General Rules

- **Allowed editors:** `vi`, `vim`, `emacs`
- Compilation on **Ubuntu 20.04 LTS** using:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a **new line**
- A `README.md` file is **mandatory**
- Code must follow **Betty style**: checked with `betty-style.pl` and `betty-doc.pl`
- **No global variables** allowed
- Maximum **5 functions per file**
- **Allowed C standard functions:**  
  `malloc`, `free`, `printf`, `exit`
- We will use our own `main.c` files for testing.  
  *(You may use your own for testing, but do not include them in the repo.)*

---

## 🧾 Header File

- All function prototypes must be in a header file named `lists.h`.
- Your header file must be **include guarded**.

---

## 🗃️ Data Structure Used

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: Integer
 * @prev: Points to the previous node
 * @next: Points to the next node
 *
 * Description: Doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

---

## 📁 Project Files

| File Name              | Description                                                    |
|------------------------|----------------------------------------------------------------|
| `0-print_dlistint.c`   | Prints all the elements of a `dlistint_t` list                 |
| `1-dlistint_len.c`     | Returns the number of elements in a `dlistint_t` list          |
| `2-add_dnodeint.c`     | Adds a new node at the beginning of a `dlistint_t` list        |
| `3-add_dnodeint_end.c` | Adds a new node at the end of a `dlistint_t` list              |
| `4-free_dlistint.c`    | Frees a `dlistint_t` list                                      |
| `5-get_dnodeint.c`     | Returns the nth node of a `dlistint_t` linked list             |
| `6-sum_dlistint.c`     | Returns the sum of all the data in a `dlistint_t` list         |
| `7-insert_dnodeint.c`  | Inserts a new node at a given position                         |
| `8-delete_dnodeint.c`  | Deletes the node at index `index` of a `dlistint_t` list       |
| `lists.h`              | Header file with structure and function prototypes             |
| `README.md`            | Project overview and documentation                             |

---

## 🚀 Tips for Success

- ✅ Test every function with both edge cases and standard cases.
- 🧠 Pay attention to memory leaks with Valgrind and always free your memory.
- 🧪 Use your own `main.c` files to validate your implementation locally.

---

## 📝 License

This project is part of the **Holberton School** curriculum  
and is intended for **educational purposes only**.
