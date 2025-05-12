<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# 📂 C - File I/O

## 📌 Project Overview

This project focuses on mastering the basics of **file input and output in C** using system calls.  
You will learn how to open, create, read, write, and close files, manipulate file permissions, and understand how file descriptors work at the OS level.

---

## 🗂️ Table of Contents

- [Learning Objectives](#-learning-objectives)
- [Requirements](#-requirements)
- [Project Files](#-project-files)
- [Tips for Success](#-tips-for-success)
- [License](#-license)

---

## 🎯 Learning Objectives

- Understand how to find reliable technical information online.
- Learn how to create, open, read, write, and close files using system calls.
- Understand file descriptors and the 3 standard ones (stdin, stdout, stderr) and their POSIX names.
- Use flags like `O_RDONLY`, `O_WRONLY`, and `O_RDWR` appropriately.
- Understand file permissions and how to set them using `open`.
- Differentiate between system calls and standard C library functions.

---

## ✅ Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation on **Ubuntu 20.04 LTS** using:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line
- A `README.md` file at the root of the project is mandatory
- Code must follow **Betty** coding style (`betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- Maximum 5 functions per file
- Only allowed C library functions: `malloc`, `free`, and `exit`
- Allowed system calls: `read`, `write`, `open`, `close`
- You may use `_putchar` (no need to push `_putchar.c`)
- All function prototypes must be in `main.h`
- All header files must be protected with include guards
- Prefer symbolic constants (e.g., `STDIN_FILENO`) over raw numbers (e.g., `0`)

---

## 📁 Project Files

| File Name                | Description                                                                 |
|-------------------------|-----------------------------------------------------------------------------|
| `0-read_textfile.c`     | Reads a text file and prints it to the POSIX standard output                |
| `1-create_file.c`       | Creates a file with given content and permissions                           |
| `2-append_text_to_file.c` | Appends text at the end of a file                                          |
| `3-cp.c`                | Copies the content of one file to another using low-level I/O               |
| `main.h`                | Header file containing all function prototypes and symbolic constants       |
| `README.md`             | This documentation file explaining the project and its structure            |
| `Requiescat`            | Custom or bonus file (consider documenting or removing if not used)         |

---

## 🚀 Tips for Success

- 🧪 Always test your functions thoroughly, especially edge cases (e.g., empty file, no permissions).
- ⚠️ Carefully manage file descriptors — don’t forget to `close()`!
- 🧼 Check for memory leaks and handle errors gracefully.
- 🔍 Use symbolic constants like `STDOUT_FILENO` instead of hardcoded values like `1`.

---

## 📝 License

This project is part of the **Holberton School** curriculum  
and is intended for **educational purposes only**.
