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

### 1. Assembly Statement Template
This part is made up of one or several assembly statements, which are separated by a colon. In the statements, there are some operand placeholders which are used to replace variables. Also there are some special chars in the operand placeholder, which are used to indicate or control the bytes of variables to be used. I call them byte limited character.

#### Operand Placeholder
In the statement, we can use some operand placeholders to refer to variables of C language. The maxinum number of operand placeholders is 10, as %0, %1, %2, ......, %9. The number after '%' indicates which variable it replaces. For example, %0 refer to the 0th variable in the later parts.

#### Byte Limited Character
The byte limited character is between '%' and the No. of a variable, which indicates the bytes to use. Here I'd like to introduce three kinds of limited characters as below:
* b: represent low byte
* h: represent high byte
* w: represent two bytes

### 2. Output Part
This part describes output operands. They are separated by a comma symbol. Each output operand consists of a limited string and a variable of C language. Note that the limited string of each output operand must contains '=' to indiacte that the operand is an output operand. As for the example above, "=a"(data) is an output operand. "=a" is the limited string and (data) is the C language variable.

### 3. Input Part
This part describes input operands. Similarly to the output part, input operand are separated by a comma symbol and each input operand consists of a limited string and a C language variable, too.

### 4. Limited Char

## Reference
http://blog.chinaunix.net/uid-26928658-id-4787852.html