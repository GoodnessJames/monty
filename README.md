Project Title: Monty Program

Overview

In this project we are going to create a stack machine/stimulator implemented in C. We will create differrent opcodes showing how elements are pushed, palled, poped, printed, swaped, added and noped in stack (sorting alogrithm).

We wull create a repository anf file.c folders to store the source codes for this differrent opcodes.


In addition, we are going compile these source codes into object files for more easy intepretation.

We used unordered data structure(LIFO) to demonstrate how data can be manipulated. Some of these functions are going to be recursive as we will demonstrate using nop.

We will also demonstrate practucally how to allocate, store, and free memory space for more functionalities.

This project allows user to perform push, pall, pint, pop, swap, add and nop. This will demonstrate basic functionality of a stack machine and show how simpke operations can be performed pn a stack in C programming.


Project Description.

Push Function: This operation adds a new element on top of a stack. It takes an integer value as a parameter and then, checks if the stack is empty. if so it returns an error. Otherwise it goes ahead and add and shift the pointer to the new top element.

Pall Operation: This prints the top element of the stack without removing it from the stack. The stack element and pointer are static (not changed). We just want to see what is on top.


Pop operation: This operation removes the top element and return it to the user causing the stack pointer to be decremented inorder to point to a new top. If the stack is empty it will return error.

Pint Operation: We will use the pint to also print the top element followed by a new line. This operation is good for debugging. If the staff is empty return error.


The nop operation: This is to show that the stack machine can also perform no operation. This does change the state of the stack.

Swap Operation: This is to exchange the value of two elements. This is useful for rearranging element in stack. If the element is < 2 then error message will be printed otherwise it should be successful.

Pop Operation: This is to remove the top element of a stack, however we will copy it to a temporary memory space before doing this.


Compilation Process

We will compile our codes using the code below

gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

This will convertt outr source  code to  object codes to check for syntax error  and other major errors  that might affect functionailities of our source code.

Any output must be printed on stdout .
Any error message should be printed  using stderr

