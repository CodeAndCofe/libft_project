# Libft

## Introduction

This project was created in 2024 at 1337 Coding School, part of the 42 Network. It was the first programming project I ever completed, and it played an important role in my journey as a developer.

I decided to upload this project to GitHub to share my work, document what I learned, and help other beginners understand the fundamentals of C programming.

Libft is a custom C library where I reimplemented several standard C library functions and developed reusable tools that can be used in future projects.

Through this project, I learned about variables, pointers, memory allocation, memory management, the stack and heap, and how to organize and compile a project using a Makefile.

## Project Overview

The goal of Libft is to build my own C library by recreating useful functions from the standard C library and implementing additional utility functions.

Instead of relying entirely on existing library functions, I had to understand how they work and implement their behavior myself.

This project helped me strengthen my understanding of C and prepared me for more complex projects at 1337.

## What I Learned

### 1. Variables and Pointers

I learned how variables store data and how pointers allow me to access and manipulate memory through addresses.

I also learned the importance of understanding data types, pointer arithmetic, and the relationship between arrays and pointers.

Pointers became especially important when working with strings, copying memory, passing data between functions, and allocating memory dynamically.

### 2. Memory Management

One of the most important lessons I learned from Libft was how memory is managed in C.

Unlike languages that automatically manage memory for the programmer, C gives me direct control over memory allocation and deallocation. This flexibility also means I am responsible for using memory correctly.

I learned to recognize and avoid common memory-related problems, including:

- **Memory leaks:** Allocated memory that is never released when it is no longer needed.
- **Invalid memory access:** Reading from or writing to memory that I am not allowed to access.
- **Buffer overflows:** Accessing memory beyond the boundaries of an allocated buffer.
- **Dangling pointers:** Pointers that refer to memory that has already been freed.
- **Double free:** Attempting to release the same allocated memory more than once.

Understanding these problems helped me write safer and more reliable C programs.

### 3. What Is Memory Allocation?

Memory allocation is the process of reserving a region of memory to store data.

In C, memory can be allocated automatically, for example for local variables, or dynamically at runtime using functions such as `malloc()` and `calloc()`.

Dynamic allocation is useful when the amount of memory required is not known in advance or when data needs to remain available beyond the lifetime of a particular function call.

For example:

```c
#include <stdlib.h>

int	main(void)
{
	int	*number;

	number = malloc(sizeof(int));
	if (number == NULL)
		return (1);
	*number = 42;
	free(number);
	return (0);
}
```

In this example:

1. `malloc(sizeof(int))` requests enough memory to store an integer.
2. The returned pointer is checked to ensure the allocation succeeded.
3. `*number = 42` stores a value in the allocated memory.
4. `free(number)` releases the allocated memory when it is no longer needed.

This example taught me that dynamically allocated memory must be managed carefully and released when it is no longer required.

### 4. Understanding the Stack and Heap

I learned the difference between the stack and the heap and how they relate to memory management.

**The stack** is commonly used for function calls, local variables, and information needed while a function executes. Its memory is managed automatically as functions are called and return.

```c
void	example(void)
{
	int	number;

	number = 42;
}
```

Here, `number` is a local variable whose lifetime is limited to the function call.

**The heap** is used for dynamic memory allocation. Memory requested through functions such as `malloc()` remains allocated until it is explicitly released with `free()` or until the process terminates.

```c
int	*number;

number = malloc(sizeof(int));
if (number != NULL)
{
	*number = 42;
	free(number);
}
```

Understanding the distinction helped me decide when dynamic allocation is necessary and why pointers must be handled carefully.

### 5. Working with Strings and Memory

I learned how strings are represented in C as arrays of characters terminated by a null character (`'\0'`).

I also worked with memory-related operations such as copying, filling, comparing, and searching memory.

These operations require careful attention to memory boundaries, pointer arithmetic, and the number of bytes being processed.

Implementing these functions myself helped me better understand what happens behind common C library operations.

### 6. Makefiles and Compilation

I learned how to use Makefiles to automate compilation and organize a C project.

Instead of compiling every source file manually, I could define the compilation rules, compiler flags, source files, and output library in a Makefile.

Common commands include:

```bash
make
make clean
make fclean
make re
```

- `make`: Compiles the project and creates the library.
- `make clean`: Removes generated object files.
- `make fclean`: Removes object files and the compiled library.
- `make re`: Performs a full rebuild.

The project produces a static library, typically named `libft.a`, which can be linked with other C projects.

## Conclusion

Libft was my first programming project and one of the most important steps in learning C.

It taught me how to work with pointers, understand memory allocation, distinguish between the stack and heap, manage allocated memory, and organize a project with a Makefile.

More importantly, it helped me understand what happens behind common library functions instead of treating them as black boxes.

These fundamentals gave me a stronger foundation for subsequent projects at 1337, where understanding memory, pointers, and low-level behavior became increasingly important.
