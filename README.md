*This activity has been created as part of the 42 curriculum by mkazemir.*

# Description

Libft is a custom C library that reimplements standard C library functions and provides additional utility functions. The goal is to improve understanding of pointers, strings, memory management, and linked lists.

# Library Description

The library includes:

- **Character functions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **String functions:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strncmp`, `ft_strnstr`
- **Memory functions:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Conversion functions:** `ft_atoi`, `ft_itoa`
- **Additional functions:** `ft_substr`, `ft_strjoin`, `ft_split`, `ft_strtrim`, `ft_strdup`
- **Linked lists:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstclear`

# Instructions

Compile the library:

```bash
make
```

Remove object files:

```bash
make clean
```

Remove all generated files:

```bash
make fclean
```

Rebuild the library:

```bash
make re
```

To use the library, include `libft.h` in your C source file and compile your program with `libft.a`.

# Resources

- `man` pages for C library functions
- GNU Make documentation
- C programming documentation and tutorials

**AI Usage:** AI was used to clarify C programming concepts, understand Makefile rules, and assist with debugging and code review.
