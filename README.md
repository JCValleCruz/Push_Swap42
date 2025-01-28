Push Swap

The Push Swap project is part of the 42 School curriculum. The goal is to create a C program that sorts a stack of integers using a limited set of operations, aiming for the fewest moves possible.
Features

    Sorting integers using stack-based operations.
    Optimizing the number of moves.
    Complies with the 42 coding standards.

Operations

The following operations are implemented to manipulate stacks:

    Swaps:
        sa: Swap the first two elements of stack A.
        sb: Swap the first two elements of stack B.
        ss: Perform sa and sb simultaneously.
    Pushes:
        pa: Push the top element of stack B to stack A.
        pb: Push the top element of stack A to stack B.
    Rotations:
        ra: Rotate stack A (top becomes bottom).
        rb: Rotate stack B (top becomes bottom).
        rr: Perform ra and rb simultaneously.
    Reverse Rotations:
        rra: Reverse rotate stack A (bottom becomes top).
        rrb: Reverse rotate stack B (bottom becomes top).
        rrr: Perform rra and rrb simultaneously.

Visual Demo

Here's a visual representation of the sorting process:

![Push Swap Visualizer](https://media3.giphy.com/media/v1.Y2lkPTc5MGI3NjExcWRqOXZidndtdXVzYjh5enVtOXJ6M29jeWZ6YWhocWYwZ3d0NXp1ayZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/4SjmaGLqVE1AngIjF0/giphy.gif)

How to Use

    Clone the repository:

https://github.com/JCValleCruz/Push_Swap42.git

Build the project:

make

Run the program with a list of integers:

./push_swap <list_of_integers>

Alternatively, you can use the following approach to manage input:

    ARG="4 3 2 1"
    ./push_swap $ARG

Examples

Input:

./push_swap 4 3 2 1

Output:

sa
pb
ra
...

Using the variable approach:

ARG="3 2 5 1 4"
----------------
./push_swap $ARG

Learning Objectives

    Understand and implement sorting algorithms.
    Master stack-based operations.
    Improve algorithmic thinking and optimization.
