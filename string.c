#include <stdio.h>
#include <string.h>
#include <ctype.h> 

// function prototype of lenstr
// int lenstr(char name[]);

int main(int argc, char *argv[])
{
    // argc is argument count, and argv is argument vector
    // argc is counter number of strings pointed to the user input in command-line or argv
    // argv is the strings of array user input
    // only print argument when its less than argc
    for (int i = 0; i < argc; i++){
    printf("%s\n", argv[i]);
    }

    // // using ctype library to uppercase the string
    // // still using for loop to print 1 by 1 char
    // // still using strlen() from string library
    // char string[] = "hello World";
    // for (int i = 0, len = strlen(string); i < len; i++){
    //     printf("%c", toupper(string[i]));
    // }

    // // loop over string literal to print every char 1 by 1
    // // using strlen in initializing int for loop
    // // char string[] = "Hello World";
    // for (int i=0, len = strlen(string);i<len;i++){
    //     printf("%c", string[i]);
    // }

    // // get the length of string using function i made
    // char name[] = "hello world";
    // int len = lenstr(name);
    // printf("%s is %i length", name, len);

    // // get the length of string literal from library string.h using 
    // function strlen()
    // char name[] = "deddia permana";
    // printf("%i", strlen(name));

    // // string created with single char must include the NUL or '\0' terminator
    // char word [2];
    // word[0] = 'h';
    // word[1] = 'b';
    // word[2] = '\0';
    // printf("%i %i %i", word[0], word[1], word[2]);

    // // string literal
    // char s[] =  "Hi!";
    // printf("%s", s);

    // char c1 = 'H';
    // char c2 = 'i';
    // char c3 = 'A';
    // printf("%c, %c, %c,", c1, c2, c3);
}

int lenstr(char name[]) {

    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    }
    return i;
}