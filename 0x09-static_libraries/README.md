# **What is a static Library?**

- static library is a file containing a collection of object files `*.o` that are linked into the program during the linking phase of compilation and are not relevant during runtime.

## **Steps to create Static Libraries**

### **Step 1: Converting .c files into object files:**

- First we need to specify to the compiler (gcc) that we want to convert all library code `*.c` extension files into object files `*.o` files, without the final step of linking in compilation phase of a C program.

#### **Command:**

#### `$ gcc -c -Wall -Werror -Wextra *.c`

#### **Flag Description:**

`-c`: compile and assemble but donot link.

### **Step 2: Creating a static Library**

- To create a static library or to add additional object files to an existing static library, we have to use the GNU ar (archiver) program. We can use a command like this:

`$ ar -rc demo.a *.o` 

- A static library named demo.a is created, and puts copies of all files with a `*.o` extension in it. The `-c` flag tells ar to 
create library if it doesn't exist while the `-r` flag tell it insert objects or replace existing objects files with new objects.

For more information, follow this link: [C Static Libraries] (https://dev.to/iamkhalil42/all-you-need-to-know-about-c-static-libraries-1o0b)  
