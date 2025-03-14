<p align="center">
   <img src="https://github.com/user-attachments/assets/7d564981-cb81-43e7-819a-25ffcfc5bd72" width=40% height=40%/>
</p>

# C - Hello, World

## 📌 Introduction
This is the first project in the **Holberton School Low-Level Programming curriculum**. It introduces the **C programming language**, the compilation process, and fundamental concepts like printing output to the standard output. The project is designed to provide a strong foundation for further exploration of C.

---

## 📚 Resources
To successfully complete this project, make sure to read and watch the following materials:

- **Everything you need to know to start with C.pdf** *(Read it fully before diving into exercises)*
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C - Part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- [Learning to program in C - Part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- [Understanding C Program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Betty Coding Style](https://github.com/holbertonschool/Betty)
- [Linus Torvalds on C vs. C++](https://harmful.cat-v.org/software/c++/linus) *(Read this only after the other materials)*

### Useful Commands
You may need to use the following commands:
- `man gcc`
- `man printf`
- `man puts`
- `man putchar`

---

## 🎯 Learning Objectives
By the end of this project, you should be able to explain the following concepts:

### General
✅ Why **C programming** is a powerful language.
✅ Who invented **C** and its history.
✅ Who are **Dennis Ritchie**, **Brian Kernighan**, and **Linus Torvalds**.
✅ What happens when you compile a program using `gcc main.c`.
✅ Understanding the **entry point** of a C program.
✅ The role of the `main` function.
✅ Printing text using `printf`, `puts`, and `putchar`.
✅ Using the unary operator `sizeof` to get the size of a data type.
✅ Compiling a program with `gcc`.
✅ The default output filename when compiling with `gcc`.
✅ The **official C coding style** and how to check your code with `betty-style`.
✅ Finding the right **header files** for standard library functions.
✅ How the `main` function affects the **return value** of a program.

---

## 📝 Project Requirements

### C Code
- Allowed editors: `vi`, `vim`, `emacs`
- Compilation on **Ubuntu 20.04 LTS** using:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files must **end with a new line**.
- Each project directory must contain a `README.md` file.
- No **compilation errors or warnings** are allowed.
- The use of `system()` is **not allowed**.
- Code must follow **Betty Coding Style**.

### Shell Scripts
- Allowed editors: `vi`, `vim`, `emacs`
- Scripts will be tested on **Ubuntu 20.04 LTS**.
- Each script must **only contain two lines**.
- All scripts must **end with a new line**.
- The first line must be exactly:
  ```sh
  #!/bin/bash
  ```

---

## 🔍 Code Linter - Betty
To ensure code follows the **Betty coding style**, install and use the **Betty linter**:

### Installation Steps:
```sh
# Clone the repository
git clone https://github.com/holbertonschool/Betty.git
cd Betty

# Install the linter
sudo ./install.sh

# Create a wrapper script for convenience
echo -e "#!/bin/bash\nBIN_PATH='/usr/local/bin'\nBETTY_STYLE='betty-style'\nBETTY_DOC='betty-doc'\nif [ '$#' = '0' ]; then echo 'No arguments passed.'; exit 1; fi\nfor argument in '$@'; do echo -e '\n========== $argument =========='; ${BIN_PATH}/${BETTY_STYLE} '$argument'; ${BIN_PATH}/${BETTY_DOC} '$argument'; done" | sudo tee /usr/local/bin/betty

# Grant execution permissions
sudo chmod a+x /usr/local/bin/betty
```

### Running the linter
```sh
betty <filename>
```

---

## 📌 How to Compile and Run C Programs

### Compilation
To compile a C file, use:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename.c> -o <output>
```
Example:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 hello.c -o hello
```

### Execution
To run the compiled program:
```sh
./hello
```

---

## 📂 Project Files
| File | Description |
|------|------------|
| `0-preprocessor` | Runs a C file through the preprocessor and saves the result in another file. |
| `1-compiler` | Compiles a C file but does not link it. |
| `2-assembler` | Generates the assembly code of a C file. |
| `3-name` | Compiles and creates an executable named `cisfun`. |
| `4-puts.c` | Prints `"Programming is like building a multilingual puzzle"` using `puts`. |
| `5-printf.c` | Prints `"with proper grammar, but the outcome is a piece of art,"` using `printf`. |
| `6-size.c` | Prints the size of various data types in C. |
| `100-intel` | Generates the assembly code (Intel syntax) of a C file. |
| `101-quote.c` | Prints `"and that piece of art is useful" - Dora Korpar, 2015-10-19"` to `stderr`. |

---

## 👤 Author
👨‍💻 **[P-Y74](https://github.com/P-Y74)** - Holberton School Student

