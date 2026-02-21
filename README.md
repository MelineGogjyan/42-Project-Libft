*This project has been created as part of the 42 curriculum by <mgogjyan>

Libft is your very first own library in C. The project involves coding a reusable C library containing multiple general-purpose functions.  
The goal is to understand how standard functions work by reimplementing them yourself. This library can then be used in future 42 school assignments and projects.

The library covers three parts:

###  Libc functions
Reimplementing standard C library functions (character checks, string and memory manipulation, conversions).

###  Additional functions
Helper functions like `ft_substr`, `ft_strjoin`, `ft_split`, etc.

###  Linked list functions
Creation, manipulation, and iteration over `t_list` linked lists.

All functions are written in C, follow the 42 Norm, compile with `-Wall -Wextra -Werror`, and do not use global variables. Memory management is handled properly, and dynamic allocations return `NULL` on failure.

## Project Rules

- Written in **C**
- Follows **42 Norm**
- No global variables
- Static helper functions allowed
- Safe memory handling; allocations return `NULL` on failure

## Instructions

Build (recommended):

```bash
make
```

Manual build (if no `Makefile` is available):

```bash
gcc -Wall -Wextra -Werror -c src/*.c
ar rcs libft.a *.o
ranlib libft.a || true
```

Compile a program that uses the library:

```bash
gcc -L. -lft example.c -I . -o example
```

Run the included smoke test (if present):

```bash
./test_main
```

Cleaning:

```bash
make fclean
rm -f *.o libft.a test_main
```

## Library (detailed description)

The library is divided into three parts: reimplementations of selected libc functions, additional helper utilities, and a small linked-list API. Functions were implemented to behave similarly to their standard counterparts while following the project constraints.

List structure used by the linked-list helpers:

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

### Part 1 — Libc Functions

Reimplemented standard C library functions:

- `ft_isalpha` — Returns 1 if the character is alphabetic, 0 otherwise
- `ft_isdigit` — Returns 1 if the character is a digit, 0 otherwise
- `ft_isalnum` — Returns 1 if the character is alphanumeric, 0 otherwise
- `ft_isascii` — Returns 1 if the character is in the ASCII range (0–127), 0 otherwise
- `ft_isprint` — Returns 1 if the character is printable, 0 otherwise
- `ft_toupper` — Converts a lowercase letter to uppercase, leaves others unchanged
- `ft_tolower` — Converts an uppercase letter to lowercase, leaves others unchanged
- `ft_strlen` — Returns the length of a string
- `ft_memset` — Fills memory with a constant byte value
- `ft_bzero` — Sets memory to zero
- `ft_memcpy` — Copies memory from source to destination
- `ft_memmove` — Copies memory handling overlapping areas
- `ft_memchr` — Searches for a byte in memory
- `ft_memcmp` — Compares two memory areas
- `ft_calloc` — Allocates memory for an array and sets it to zero
- `ft_strdup` — Allocates new memory and duplicates a string
- `ft_strchr` — Returns pointer to first occurrence of character in string
- `ft_strrchr` — Returns pointer to last occurrence of character in string
- `ft_strncmp` — Compares up to n characters of two strings
- `ft_strlcpy` — Copies a string to a buffer of given size
- `ft_strlcat` — Concatenates strings to a buffer of given size
- `ft_strnstr` — Locates a substring in a string, limited by length
- `ft_atoi` — Converts string to integer

### Part 2 — Additional Functions

Utility helper functions:

- `ft_substr` — Returns a substring from a string starting at a given index and length
- `ft_strjoin` — Concatenates two strings into a new allocated string
- `ft_strtrim` — Trims characters from the start and end of a string
- `ft_split` — Splits a string into an array using a delimiter character
- `ft_itoa` — Converts an integer to a string
- `ft_strmapi` — Creates a new string by applying a function to each character
- `ft_striteri` — Applies a function to each character in place
- `ft_putchar_fd` — Writes a character to a given file descriptor
- `ft_putstr_fd` — Writes a string to a given file descriptor
- `ft_putendl_fd` — Writes a string followed by newline
- `ft_putnbr_fd` — Writes an integer as text to a given file descriptor

All allocating functions return `NULL` on failure.

### Part 3 — Linked List Functions

- `ft_lstnew` — Creates a new list node with content, next initialized to NULL
- `ft_lstadd_front` — Adds a node at the beginning of the list
- `ft_lstsize` — Counts the number of nodes in the list
- `ft_lstlast` — Returns the last node of the list
- `ft_lstadd_back` — Adds a node at the end of the list
- `ft_lstdelone` — Deletes a single node using a delete function (does not free next)
- `ft_lstclear` — Deletes and frees all nodes using a delete function and sets pointer to NULL
- `ft_lstiter` — Applies a function to each node’s content
- `ft_lstmap` — Creates a new list by applying a function to each node’s content; uses delete function if allocation fails

Key behaviors:

- `ft_lstnew` allocates a node with `content` and sets `next = NULL`.
- `ft_lstadd_back` traverses to the last node and appends the new node.
- `ft_lstdelone` and `ft_lstclear` accept a function pointer to free node `content` when needed.

## Resources

- 42 Libft subject documentation
- Linux `man` pages 
- C standard library documentation and tutorials (e.g., cppreference, Open Group)

AI usage:

AI tools were used to clarify man-page behaviors, check syntax examples, and improve README structure and wording. All production code (the library functions) was implemented by hand; AI was not used to generate final source code that was included without review.

## Notes

- Language: C
- Coding style: 42 Norm
- Compiled with: `-Wall -Wextra -Werror`
- Library built using `ar`
