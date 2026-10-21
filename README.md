*This activity has been created as part of the 42 curriculum by mkazemir.*

# ft_printf

## Description

The `ft_printf` project is part of the 42 curriculum. The goal is to recreate the behavior of the standard C library function `printf()` by implementing a simplified version called `ft_printf()`.

This project introduces variadic functions in C and strengthens the understanding of formatted output, recursion, character handling, and static library creation.

The function returns the number of characters printed, excluding the terminating null byte.

Supported conversions:

| Conversion | Description |
|---|---|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` | Prints a signed decimal integer |
| `%i` | Prints an integer in base 10 |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints a hexadecimal number using lowercase letters |
| `%X` | Prints a hexadecimal number using uppercase letters |
| `%%` | Prints a percent sign |

## Instructions

### Compilation

Run the following command from the root of the repository:

```bash
make
```

This creates the static library:

```text
libftprintf.a
```

Available Makefile rules:

- `make` or `make all`: Builds the library.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and the library.
- `make re`: Rebuilds the library from scratch.

### Usage

Include the header file in your C program:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "42", -42);
    return (0);
}
```

Compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o program
```

Run it:

```bash
./program
```

## Algorithm and Data Structures

### Format String Parsing

The implementation processes the format string from left to right using an integer index.

- If the current character is not `%`, it is written directly to standard output.
- If the current character is `%`, the next character identifies the requested conversion.
- A format handler selects the appropriate function for the conversion.
- The return value of each handler is added to a total character count.

This approach provides a simple, linear scan of the format string.

### Conversion Handlers

Each conversion is handled by a dedicated function. This separates the parsing logic from the conversion logic and makes the code easier to understand, test, and maintain.

The implementation uses `va_list`, `va_start`, `va_arg`, and `va_end` to retrieve variadic arguments.

### Recursive Number Conversion

Decimal and hexadecimal output use recursive functions.

For decimal output, the number is divided by 10 until the most significant digit is reached. The digits are then printed while the recursive calls return.

For hexadecimal output, the same approach is used with base 16. A digit lookup string maps each remainder to its corresponding hexadecimal character.

This avoids the need for a separate output buffer to reverse the digits.

### Data Structures

No complex data structures are required. The implementation primarily uses:

- An integer index to traverse the format string.
- An integer counter to track the number of characters printed.
- A `va_list` to access variadic arguments.
- Integer variables for decimal and hexadecimal conversion.

The design is intentionally simple because the project focuses on formatted output rather than complex data storage.

## Resources

### Documentation

- [printf(3) — Linux manual page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg.h — C variadic arguments](https://en.cppreference.com/w/c/variadic.html)
- [write(2) — Linux manual page](https://man7.org/linux/man-pages/man2/write.2.html)
- [GNU ar documentation](https://sourceware.org/binutils/docs/binutils/ar.html)

### AI Usage

AI tools were used as a learning aid during development. They helped explain variadic functions, recursive number conversion, hexadecimal representation, Makefile rules, compiler errors, and Git workflows.

AI assistance was also used to review implementation logic, suggest test cases, and improve project documentation. The implementation was tested and reviewed by the student, who is responsible for understanding the code and being able to explain and modify it during peer evaluation.

## Author

**mkazemir**

42 School — ft_printf
