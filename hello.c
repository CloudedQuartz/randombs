#include <stdio.h>
#include <stdlib.h>
#include "utilities.h"

int main()
{
    char *name = get_string("Name:");
    printf("Hello, %s", name);
    free(name);
}