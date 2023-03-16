#include <stdio.h>
#include <stdlib.h>

char * get_string(char * prompt)
{
    char *buf = NULL;
    size_t len = 0;
    printf("%s\n", prompt);
    getline(&buf, &len, stdin);
    return buf;
}

int main()
{
    char *name = get_string("Name:");
    printf("Hello, %s", name);
    free(name);
}