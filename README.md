# First Group Project of the ALX SE Program by John and Bisola
## Overview
- The printf function is a commonly used function in programming languages, particularly in **C** and related languages. It stands for **"print formatted"** and is primarily used for formatted output to the console or other output streams. - It allows you to print data with specified formats, such as specifying the number of decimal places for a floating-point number or padding a string with spaces.
## Tools
- Bash Script
- C
- Git

## Tasks
### Note: Tasks in this project have specific requiremnt that is not fully listed here.
### Mandatory
- Write a function that produces output according to a format. format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers: <br/>
**c** <br/>
**s**  <br/>
**%**  <br/>
**d**  <br/>
**i**  <br/>
### Advanced
**b**: the unsigned int argument is converted to binary<br/>
**u** <br/>
**o** <br/>
**x** <br/>
- Use a local buffer of 1024 chars in order to call write as little as possible.
- Handle the following custom conversion specifier:<br/>
**S** : prints the string.<br/>
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)<br/>
- Handle the following conversion specifier: p.
- Handle the following flag characters for non-custom conversion specifiers:<br/>
**+**<br/>
**space**<br/>
**#**<br/>
- Handle the following length modifiers for non-custom conversion specifiers:)<br/>
**l**<br/>
**h**<br/>
Conversion specifiers to handle: d, i, u, o, x, X<br/>
- Handle the field width for non-custom conversion specifiers.
- Handle the precision for non-custom conversion specifiers.
- Handle the 0 flag character for non-custom conversion specifiers.
- Handle the - flag character for non-custom conversion specifiers.
- Handle the following custom conversion specifier:<br/>
**r** : prints the reversed string<br/>
- Handle the following custom conversion specifier:<br/>
**R**: prints the rot13'ed string<br/>
