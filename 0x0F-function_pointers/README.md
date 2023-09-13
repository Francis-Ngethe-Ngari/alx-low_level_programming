# **Learning About Function to Pointers**

- Function pointers are a powerful feature in C that allow functions to be
treated as first-class citizens, meaning they can be passed as arguments,
returned from functions, and assigned to variables. Let's dive deep into
this concept.

## **Basics of Function Pointers**

- A function pointer is a variable that can store the address of a function.
Just like we have pointers for data types like int , float , etc., we can
have pointers pointing to functions.

```
void jambo() 
{
	printf("Hello, World!\n");
}
int main() 
{
	/*Declare a function pointer*/
	void (*greet)();

	/*Assign address of jambo to functionptr*/
	greet = jambo;

	/*call jambo through function pointer*/
	functionPtr();

	return 0;
}
```

- In the above example, greet is a pointer to a function that takes no
arguments and returns void. We assign the address of the jambo
function to greet and then use greet function pointer to call the
jambo function.

- Every task contains a brief documentation of what a function does, its parameters and
the return type.
