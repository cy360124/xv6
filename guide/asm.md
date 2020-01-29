# Inline Assembly Statement

## Introduction
This file aims to introduce the grammar of how to write a right inline assembly statement.

## Format
Format:  
_asm (assembly statement template : output part : input part : description part)_  
Note:   
The assembly statement template is necessary, while the last three parts are all optional. But the colons can be omitted.   
E.g:  
asm volatile ("inb %w1,%0" : "=a" (data) : "d" (port)) 
* asm: indicates that the code after it is an inline assembly statement.
* volatile: tell the compiler not to optimize the code. (optional)  

## Operand Placeholder
In the statement, we can use some operand placeholders to refer to variables of C language. The maxinum number of operand placeholders is 10, as %0, %1, %2, ......, %9. The number after '%' indicates which variable it replaces. For example, %0 refer to the 0th variable.