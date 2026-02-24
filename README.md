*This project has been created as part of the 42 curriculum by lciardo.*

# Push_swap

## Description
Push_swap is a highly structured algorithmic project that challenges you to sort a set of integer values using two stacks and a specific set of instructions. The main objective is to write a C program named `push_swap` that calculates and displays the most optimized sequence of operations to sort the given data in ascending order within stack a.

This project focuses on the application of basic algorithms and the understanding of their complexity. Success depends on choosing the most appropriate sorting method to achieve the lowest possible number of actions, as performance is measured against specific operation limits provided in the benchmark.

## Instructions

### Compilation
The project includes a Makefile to compile the source files into the `push_swap` binary. The compilation uses `cc` with the flags `-Wall -Wextra -Werror`. The Makefile must contain the rules: `all`, `$(NAME)`, `clean`, `fclean`, and `re`.

To compile, run:
```bash
make
```

### Execution
The program takes the stack 'a' formatted as a list of integers as an argument. The first argument will be placed at the top of the stack.
```bash
./push_swap 2 1 3 6 5 8
```

### Constraints and Error Handling
- If no parameters are specified, the program displays nothing and returns to the prompt.
- In case of an error (non-integer arguments, exceeding integer limits, or duplicates), the program displays `Error` followed by a newline on the standard error.

## Operations
The following operations are available to manipulate the stacks:
- **sa / sb / ss**: Swap the first two elements.
- **pa / pb**: Push the top element from one stack to another.
- **ra / rb / rr**: Rotate up (first becomes last).
- **rra / rrb / rrr**: Reverse rotate down (last becomes first).

## Benchmarks
The algorithm must comply with the following operation limits for 100% validation:
- **100 numbers**: Fewer than **700** operations.
- **500 numbers**: No more than **5500** operations.

## Resources
### Classic References
- **Sorting Algorithms & Complexity**: General documentation on sorting theories.
- **C Programming & Memory**: Documentation on dynamic memory allocation (`malloc`, `free`) and pointer manipulation for linked lists.
- **Data Structures**: Study of Stack-based data structures and Doubly Linked Lists.
- **42 Communit

### AI Usage
In accordance with 42 guidelines, AI was used as a technical assistant for:
1. **Algorithm Logic**: Assistance in designing logic for small stacks (3, 4, and 5 elements) to stay within instruction limits.
2. **Optimization**: Implementing the "half-stack" strategy (`size / 2`) to determine the most efficient rotation direction.
3. **Debugging**: Solving Makefile linking issues and identifying "undefined reference" errors.
