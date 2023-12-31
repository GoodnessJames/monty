# Monty Interpreter
Welcome to the Monty Bytecode Interpreter. This interpreter was developed in C language and is compliant with the ISO C89 standard. It is designed to process Monty bytecode files, which can have any extension, though preferably ".m". The interpreter reads these bytecode files and executes the opcodes they contain.
This interpreter offers two execution modes: stack (LIFO - Last In, First Out) and queue (FIFO - First In, First Out). You can switch between these modes during script execution as needed. The interpreter is capable of handling various Monty opcodes, including those related to printing, mathematical operations, and more.

## Requirements
* [Ubuntu 14.04 LTS](http://releases.ubuntu.com/14.04/) - Operating system

* [GCC 4.8.4](https://gcc.gnu.org/gcc-4.8/) - Compiler


## Prerequisites

* Must have `git` installed.

* Must have repository cloned.

```
$ sudo apt-get install git
```

## Installation and Usage

Clone the repository into a new directory:

```
$ git clone https://github.com/GoodnessJames/monty.git
```
Compile with the following:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

Run the interpreter on a file:

```
./monty file.m
```

## Monty Opcodes

* **push**
  * Usage: `push <int>`
  * Pushes an element to the stack.
  * The parameter `<int>` must be an integer.

* **pall**
  * Prints all values in the stack/queue, starting from the top.

* **pint**
  * Prints the top value of the stack/queue.

* **pop**
  * Removes the top element of the stack/queue.

* **swap**
  * Swaps the top two elements of the stack/queue.

* **nop**
  * Does not do anything.

* **add**
  * Adds the top two elements of the stack/queue.
  * The result is stored in the second element from the top and the top element is popped.

* **sub**
  * Subtracts the top element of the stack/queue from the second element from the top.
  * The result is stored in the second element from the top and the top element is removed.

* **mul**
  * Multiplies the top two elements of the stack/queue.
  * The result is stored in the second element from the top and the top element is removed.

* **div**
  * Divides the second element from the top of the stack/queue by the top element.
  * The result is stored in the second element from the top and the top element is removed.

* **mod**
  * Computes the modulus of the second element from the top of the stack/queue divided by the top element.
  * The result is stored in the second element from the top and the top element is removed.

* **pchar**
  * Prints the character value of the top element of the stack/queue.
  * The integer at the top is treated as an ASCII value.

* **pstr**
  * Prints the string contained in the stack/queue.
  * Prints characters element by element until the stack/queue is empty, a value is `0`, or an error occurs.

* **rotl**
  * Rotates the top element of the stack/queue to the bottom.

* **rotr**
  * Rotates the bottom element of the stack/queue to the top.

* **stack**
  * Switches a queue to stack mode.

* **queue**
  * Switches a stack to queue mode.

**Note:**
- Opcodes preceeded by a `#` are treated as comments and the corresponding line is ignored.
- Lines can be empty and can contain any number of spaces before or after an opcode and its argument (only the first opcode and/or argument is taken into account).
- The Monty Interpreter runs in the default mode of STACK mode, but the mode can be switched to queue mode.

## Testing and Validation
The following are set of tests carried out with the monty interpreter to validate the interpreter function as expected:

**Operation:** Push values onto the stack and print them all.

```
$ cat push_pall_pint.m
push 1
push 2
push 3
pall
pint
$ ./monty push_pall_pint.m
3
2
1
3
```

Using mathmatical operations to add, multiply, divide, etc. Takes the second from the top and performs the operation on the top: `second_from_top / top`, `second_from_top - top`, `etc`. Then assigns that to the `second_from_top` and pops the top element off the stack.

```
$ cat math.m
push 3
push 2
push 1
pall
mul
pall
$ ./monty math.m
1
2
3
1
6
```

Entering queue mode to perform all operations in FIFO (queue) mode instead of default LIFO (stack) mode.

Note: This does not change current stack, as it still sets front of queue to top of stack.

```
$ cat queue.m
queue
push 1
push 2
push 3
pall
stack
push 4
push 5
push 6
pall
$ ./monty queue.m
1
2
3
6
5
4
1
2
3
```

## Project Contributors
- [Akoma Goodness James](https://github.com/GoodnessJames)
- [Nna Ginika Elizabeth](https://github.com/Giniks)

## Acknowledgments
* ALX SE School (for providing guidance)
