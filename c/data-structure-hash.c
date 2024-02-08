// hast table is array of linked list

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node{
    int *name;
    int *number;
    struct node *struct;
}node;

int main(void)
{
    node *table[26];
}

unsigned int hash(const char *word)
{
    return toupper(word[0]) - 'A';
}