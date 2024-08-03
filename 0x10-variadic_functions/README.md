# Variadic Functions

This project demonstrates the use of variadic functions in C, which allow functions to accept a variable number of arguments.

## Files

- `variadic_functions.h`: Header file containing function prototypes.
- `0-sum_them_all.c`: Implements a function to sum all its parameters.
- `0-main.c`: Main file for testing the `sum_them_all` function.

## Function

### `int sum_them_all(const unsigned int n, ...)`

This function returns the sum of all its parameters.

**Parameters:**

- `n`: The number of arguments passed to the function.
- `...`: The arguments to be summed.

**Returns:**

- The sum of all the parameters. If `n` is 0, the function returns 0.

## Compilation

To compile the code, use the following command:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o sum

