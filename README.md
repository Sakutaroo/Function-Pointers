# Function pointers template

The principle of function pointers is to compare your argument with a list (map) of defined arguments. Depending on the match, the function address will be returned.

Declaration of function pointers :

	int (*str)(int)
This declaration contains the return of the function (int here) and its arguments (int here).
It's essential to add '*' between the parentheses to specify that it is indeed function pointers and not a classic prototype.

The declaration of the map is specified in the program as a comment.


Compilation :

	gcc function_pointers.c
