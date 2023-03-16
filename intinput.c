#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int get_int(char * prompt)
{
    char *buf = NULL;

    size_t len_buf = 0;
    printf("%s\n", prompt);
    getline(&buf, &len_buf, stdin);
    
    int ret = 0;
    int i = 0;

    while (i <= strlen(buf) - 2) // strlen includes \n
    {
        char tmp_buf = buf[i];
        if ((int)(tmp_buf) < 48 || (int)(tmp_buf) > 57) // check if not number
        {
            break;
        }
    
        int exp = (int)(pow(10, strlen(buf) - 2 - i));
        ret += ((int)(tmp_buf) - 48) * exp;
        i++;
    }
    return ret;
}

int main()
{
    printf("The number is: %d\n", get_int("Number"));
}