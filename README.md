# Libft

**Libft** is a custom C library developed as part of the **42 Network curriculum**, completed by **yalsaleh** during the **42 Irbid Common Core program (New Curriculum)**.

This project represents my first step into low-level programming at 42 and serves as a foundational library that will be reused across many future projects.

---

## 📌 Overview

The purpose of **Libft** is to reimplement a set of essential functions from the C standard library, along with additional utility functions required by the 42 curriculum.

By recreating these functions from scratch, this project aims to deepen understanding of:

* Memory allocation and management
* Pointer arithmetic
* String and character manipulation
* Low-level data handling
* Linked list structures
* Writing efficient, norm-compliant C code

All functions are written in **C**, follow the **42 Norm**, and avoid forbidden standard library calls as required by the project subject.

---

## 🧱 Library Content

Libft is divided into several functional categories:

### 🔤 Character & Type Checking

Functions to analyze and manipulate characters.

Examples:

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_tolower`
* `ft_toupper`

---

### 🧵 String Manipulation

Functions to handle C strings safely and efficiently.

Examples:

* `ft_strlen`
* `ft_strdup`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strnstr`
* `ft_strjoin`
* `ft_substr`
* `ft_strtrim`
* `ft_split`
* `ft_strmapi`
* `ft_striteri`

---

### 🧠 Memory Management

Functions to allocate, initialize, and manipulate memory.

Examples:

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

---

### 🔢 Conversion Utilities

Functions to convert between data representations.

Examples:

* `ft_atoi`
* `ft_itoa`

---

### 📤 File Descriptor Output

Functions to write data to file descriptors.

Examples:

* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

---

### 🔗 Linked List Utilities (Bonus Part)

A set of functions to manipulate singly linked lists.

Examples:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstadd_back`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

---

## ⚙️ Compilation & Usage

A `Makefile` is provided to manage the build process.

```bash
make        # Compile and generate libft.a
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Recompile everything from scratch
```

After compilation, the static library `libft.a` can be linked with other C projects:

```bash
cc main.c -L. -lft
```

---

## 📁 Project Structure

* `libft.h` — Public header file containing all function prototypes
* `*.c` — Source files implementing library functions
* `Makefile` — Build automation
* `libft.a` — Generated static library (after compilation)

---

## 📚 Helpful Resources

* C Standard Library manual pages (`man 3`)
* Tutorials on pointers and dynamic memory allocation
* Articles explaining libc implementation techniques
* 42 intra documentation and subject PDFs

---

## 🤖 AI Usage Disclaimer

AI tools were used **only** for:

* Structuring and refining documentation
* Improving explanations and wording
* Formatting this README in Markdown

AI was **not used to generate or write any project code**, in full compliance with **42’s academic integrity rules and learning objectives**.

---

## ✅ Project Status

* ✔️ Completed
* ✔️ Norm-compliant
* ✔️ Successfully tested
* ✔️ Ready for reuse in future 42 projects

---
