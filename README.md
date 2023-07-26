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
