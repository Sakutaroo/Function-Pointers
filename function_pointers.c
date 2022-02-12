#include "function_pointers.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>

int your_function(int nb)
{
    printf("number = %d\n", nb);
    return nb;
}

static const command_t command_map[] = {
    {.command = "test", .fptr = your_function}, // Add items if needed
    {.command = NULL, .fptr = NULL}
};

const command_t *find_command(char *your_var)
{
    if (your_var == NULL)
        return NULL;
    // The loop traverses the map to find the function to call
    for (int index = 0; command_map[index].fptr != NULL; index += 1) {
        if (strcmp(your_var, command_map[index].command) == 0) {
            return &command_map[index];
        }
    }
    return NULL;
}

int main(void)
{
    const command_t *com = NULL;
    char str_working[5] = {'t', 'e', 's', 't', '\0'}; // Working example
    char str_non_working[2] = {'r', '\0'}; // Non-working example
    int nb = 5;

    if (str_working == NULL || str_non_working == NULL)
        return 84;
    com = find_command(str_working); // Search the function
    if (com == NULL)
        return 84;
    com->fptr(nb); // Function call
    return 0;
}
