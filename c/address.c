#include <stdio.h>

int main(void)
{
    /*
    When you declare variable array of char or we called string, the variable itself is
    pointer to the first element of array. pointer ofc pointed to address
    of the first element in array.

    when we try to compare it with the variable[0] we can print it using
    &variable[0]

    %p specifier expect a pointer argument

    char s[] actually char *[]

    */
    char *s = "Hi!";
    printf("the string is: %s\n", s);
    printf("string is pointer to the address of first array element: %p\n", s);
    printf("printed address of first char in string using ampersand and index: %p\n", &s[0]);
    printf("========= pointer aritmatic==========\n");
    printf("printed first char using pointer to s: %c\n", *s);
    printf("printed second char using pointer to s+1: %c\n", *(s+1));
    printf("printed third char using pointer to s+2: %c\n", *(s+2));


    // int a = 50;
    // int *b = &a;
    // printf("value of a = %i, address of a = %p, address of ptr b %p", a, &a, b);
}