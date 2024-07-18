# 0x0C. C - More malloc, free

This directory contains tasks related to dynamic memory allocation in C. Each task involves creating or modifying a C program that utilizes functions like `malloc`, `free`, and `realloc`.

## Tasks

### 0. Trust no one
- **File:** `0-malloc_checked.c`
- **Description:** Write a function that allocates memory using `malloc`.
  - Prototype: `void *malloc_checked(unsigned int b);`
  - If `malloc` fails, the function should cause normal process termination with a status value of `98`.

### 1. string_nconcat
- **File:** `1-string_nconcat.c`
- **Description:** Write a function that concatenates two strings.
  - Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
  - The returned pointer should point to a newly allocated space in memory which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated.
  - If `malloc` fails, return `NULL`.

### 2. _calloc
- **File:** `2-calloc.c`
- **Description:** Write a function that allocates memory for an array, using `malloc`.
  - Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
  - The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
  - The memory is set to zero.
  - If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`.
  - If `malloc` fails, then `_calloc` returns `NULL`.

### 3. array_range
- **File:** `3-array_range.c`
- **Description:** Write a function that creates an array of integers.
  - Prototype: `int *array_range(int min, int max);`
  - The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`.
  - If `min` > `max`, return `NULL`.
  - If `malloc` fails, return `NULL`.

### 4. _realloc
- **File:** `100-realloc.c`
- **Description:** Write a function that reallocates a memory block using `malloc` and `free`.
  - Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`
  - The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes.
  - If `new_size` > `old_size`, the “added” memory should not be initialized.
  - If `new_size` == `old_size` do not do anything and return `ptr`.
  - If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`.
  - If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`.

### 5. We must accept finite disappointment, but never lose infinite hope
- **File:** `101-mul.c`
- **Description:** Write a program that multiplies two positive numbers.
  - Usage: `mul num1 num2`
  - `num1` and `num2` will be passed in base 10.
  - Print the result, followed by a new line.
  - If the number of arguments is incorrect, print `Error`, followed by a new line, and exit with a status of `98`.
  - `num1` and `num2` should only be composed of digits. If not, print `Error`, followed by a new line, and exit with a status of `98`.
  - You are allowed to use more than 5 functions in your file.

## Usage

To compile and run any of the tasks, use the following commands:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <source_file> -o <output_file>
./<output_file>
