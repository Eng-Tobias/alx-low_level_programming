# 0x12. C - Singly linked lists

## Description
This project involves implementing and working with singly linked lists in C. The tasks include creating functions to manipulate and interact with linked lists, such as printing list elements, adding nodes, and freeing memory.

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A README.md file at the root of the folder of the project is mandatory
- Code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No global variables are allowed
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden
- You are allowed to use `_putchar`
- The prototypes of all functions and the prototype of the function `_putchar` should be included in a header file called `lists.h`
- All header files should be include guarded

## Data Structure
The following data structure is used for this project:

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

