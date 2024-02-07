#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a = 2;
    int b = 4;

    printf("a: %i, b: %i\n", a, b);
    
    // if you dereferencing in pointer, make sure
    // the pointed variable is using ampersand &;
    swap(&a, &b);

    printf("a: %i, b: %i", a, b);
}

// called passing by reference, it tell where the n variable address is stored
void swap(int *a, int *b)
{
    // go to address of a and gets the value, then put it in the temp
    int temp = *a;
    // go to the address of b and gets the value
    // go to the address of a and change the value to the value at address b
    *a = *b;
    // go to the address of b, and put temp value in there
    *b = temp;
}