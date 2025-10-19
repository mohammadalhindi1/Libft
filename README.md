# Libft

**Libft** is a custom C library that recreates essential standard functions and introduces additional utilities for string manipulation, memory management, and linked lists.  
It serves as a personal base library to be reused in future C projects.

## 🧠 Project Overview
The goal of this project is to build a library from scratch that mimics the behavior of common functions from the C standard library.  
This helps strengthen understanding of pointers, memory allocation, and data structures.

### Main Categories
- **Part 1:** Reimplementation of standard C functions  
  Examples: `memset`, `bzero`, `memcpy`, `strdup`, `atoi`, `strlen`, etc.  
- **Part 2:** Additional custom functions for easier programming  
  Examples: `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`, `ft_strmapi`, etc.  
- **Bonus Part:** Linked list utilities  
  Examples: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstclear`, etc.

## ⚙️ Features
- Clean and efficient C code following Norm rules.  
- Modular design for easy integration into any C project.  
- Comprehensive handling of strings, memory, and lists.  
- Acts as the foundation for later projects like **get_next_line**, **ft_printf**, and **push_swap**.

## 💡 Example Usage
```c
#include "libft.h"

int main(void)
{
    char str[] = "Hello, World!";
    printf("Length: %zu\n", ft_strlen(str));
    return 0;
}
```

## 🧩 Compilation
To compile the library:
```bash
make
```
This will generate a static library file:
```
libft.a
```

You can link it in your project:
```bash
cc main.c libft.a
```

## 🧾 Author
**Mohammad Alhindi**  
DevOps Engineer | Cloud & System Development  
[GitHub](https://github.com/mohammadalhindi1)
