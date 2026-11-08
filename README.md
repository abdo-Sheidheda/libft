*This project has been created as part of the 42 curriculum by abed-dyb.*

# Libft

## Description

Libft is my own C library, made for the 42 curriculum. It recreates some standard C functions, adds extra utility functions and includes linked list functions. Everything is compiled into a static library: `libft.a`.

The library is split into three parts.

### Part 1: libc functions

| Function | What it does |
|---|---|
| `ft_isalpha` | Checks if a character is a letter. |
| `ft_isdigit` | Checks if a character is a digit. |
| `ft_isalnum` | Checks if a character is a letter or a digit. |
| `ft_isascii` | Checks if a character is in the ASCII table (0 to 127). |
| `ft_isprint` | Checks if a character is printable. |
| `ft_strlen` | Returns the length of a string. |
| `ft_memset` | Fills a block of memory with a given byte. |
| `ft_bzero` | Sets a block of memory to zero. |
| `ft_memcpy` | Copies a block of memory to another one. |
| `ft_memmove` | Copies a block of memory, even if the two blocks overlap. |
| `ft_strlcpy` | Copies a string into a buffer of a given size. |
| `ft_strlcat` | Appends a string to another one in a buffer of a given size. |
| `ft_toupper` | Converts a letter to uppercase. |
| `ft_tolower` | Converts a letter to lowercase. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings, up to n characters. |
| `ft_memchr` | Finds a byte in a block of memory. |
| `ft_memcmp` | Compares two blocks of memory. |
| `ft_strnstr` | Finds a small string inside a bigger one, within n characters. |
| `ft_atoi` | Converts a string to an integer. |
| `ft_calloc` | Allocates memory and fills it with zeros. |
| `ft_strdup` | Returns a new copy of a string. |

### Part 2: additional functions

| Function | What it does |
|---|---|
| `ft_substr` | Returns a part of a string. |
| `ft_strjoin` | Joins two strings into a new one. |
| `ft_strtrim` | Removes a set of characters from the start and the end of a string. |
| `ft_split` | Splits a string into an array of strings using a separator. |
| `ft_itoa` | Converts an integer to a string. |
| `ft_strmapi` | Applies a function to each character of a string and returns the new string. |
| `ft_striteri` | Applies a function to each character of a string (modifies it directly). |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes a number to a file descriptor. |

### Part 3: linked lists

The list uses this structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | What it does |
|---|---|
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node at the beginning of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstsize` | Counts the nodes in the list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstdelone` | Deletes one node. |
| `ft_lstclear` | Deletes a node and all the nodes after it. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

## Instructions

```bash
make        # build libft.a
make clean  # remove object files
make fclean # remove object files and libft.a
make re     # rebuild everything
```

To use it in your project:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

## Resources

- `man` pages of the libc functions (`man 3 strlcpy`, `man 3 memmove`, `man 3 calloc`, ...)
- [GNU Make manual](https://www.gnu.org/software/make/manual/make.html)
- [42 Norm (norminette)](https://github.com/42School/norminette)
- [libftTester by Tripouille](https://github.com/Tripouille/libftTester)
- [W3Schools: C Strings](https://www.w3schools.com/c/c_strings.php)
- [W3Schools: C Pointers](https://www.w3schools.com/c/c_pointers.php)
- [W3Schools: C Structures](https://www.w3schools.com/c/c_structs.php)
- [GeeksforGeeks: C Pointers](https://www.geeksforgeeks.org/c/c-pointers/)
- [Learn-C.org: Linked Lists](https://www.learn-c.org/en/Linked_lists)

**Use of AI:** I used AI to help me understand concepts, explain the errors I got, and find useful resources. I wrote the code myself.
