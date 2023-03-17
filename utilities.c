#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "utilities.h"

char * get_string(char * prompt)
{
    char *buf = NULL;
    size_t len = 0;
    printf("%s\n", prompt);
    getline(&buf, &len, stdin);
    return buf;
}

int get_int(char * prompt)
{
    char *buf = NULL;

    size_t len_buf = 0;
    printf("%s\n", prompt);
    getline(&buf, &len_buf, stdin);
    
    int ret = 0;

    for (int i = 0; i < strlen(buf) - 1; i++) // strlen includes \n
    {
        char tmp_buf = buf[i];
        if ((int)(tmp_buf) < 48 || (int)(tmp_buf) > 57) // check if not number
        {
            break;
        }
    
        int exp = (int)(pow(10, strlen(buf) - 2 - i));
        ret += ((int)(tmp_buf) - 48) * exp;
    }
    return ret;
}