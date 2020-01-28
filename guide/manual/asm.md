# Inline Assembly Statement

## Introduction
This file aims to introduce the grammar of how to write a right inline assembly statement.

## Format
Format:  
_asm (assembly statement template : output part : input part : description part)_  
Note:   
The assembly statement template is necessary, while the last three parts are all optional. But the colons can be omitted.   
For example:  
asm volatile ("inb %w1,%0" : "=a" (data) : "d" (port)) 
* asm: indicates that the code after it is an inline assembly statement.
* volatile: tell the compiler not to optimize the code. (optional)  

## Placeholder Variable  
In the statement, we can use some placeholders to refer to variables of C language.