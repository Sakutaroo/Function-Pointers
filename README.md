# Function pointers template

The principle of function pointers is to compare your argument with a list (map) of defined arguments. Depending on the match, the function address will be returned.

Declaration of function pointers :

	int (*str)(int)
This declaration contains the return of the function (int here) and its arguments (int here).<br />
(*str) --> this is the pointer name. It's essential to add '*' between the parentheses to specify that it is indeed function pointers and not a classic prototype.

Nous allons l'initialiser à NULL dans notre programme en faisant référence à notre structure :

	const command_t *com = NULL
command_t correspond au nom de notre structure.
*com correspond au nom de notre pointeur sur fonction, c'est cette variable qui va stocker l'adresse du pointeur.

Nous allons ensuite créer une nouvelle fonction afin de récupérer l'adresse de la fonction à appeler







The declaration of the map is specified in the program as a comment.


Compilation :

	gcc function_pointers.c
