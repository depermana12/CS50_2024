#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = "hi";
    char *t = malloc(strlen(s) + 1);

    if (t == NULL)
    {
        return 1;
    }

    strcpy(t, s);
     
    // error checking of length of t, if length of t is greater than 0
    // then there is a char inside. So change the first index of char to uppercase
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    //free(t);
    return 0;
}