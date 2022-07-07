# More functions, more nested loop

More indept look into functions and nested loops and how they we can use them in our programming journey.

# Function

A function is a group of statements that together perform a task. Every C program has at least one function, which is main(), and all the most trivial programs can define additional functions.

You can divide up your code into separate functions. How you divide up your code among different functions is up to you, but logically the division is such that each function performs a specific task.

A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function.

The C standard library provides numerous built-in functions that your program can call. For example, strcat() to concatenate two strings, memcpy() to copy one memory location to another location, and many more functions.

A function can also be referred as a method or a sub-routine or a procedure, etc. ('tutorialspoint.com/cprogramming')

# Nested loops

Nested loops are simply loops inside a loop. A number of loops can be nested as long as it runs corrected and achieves the aim to which it was set out to achive.

# Nested while loops

As stated above, nested while loop puts within itself loops to achieve specific result
An example of what a while loop look like is shown below;

Nested for loop in C
int main()
{
   for (int i=0; i<2; i++)
   {
	for (int j=0; j<4; j++)
	{
	   printf("%d, %d\n",i ,j);
	}
   }
   return 0;
}
