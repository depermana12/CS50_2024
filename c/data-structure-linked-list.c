/*
    lecture 5 - data structures
*/

#include <stdio.h>
#include <stdlib.h>

    // give me a definition of struct called node
    // because it is annoying to keep writting struct node, 
    // so we can simpliify it using only node keyword
    typedef struct node
    {
        int number;
        struct node *next;
    }node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);
        // printf("%i\n", number);
        node *tmpMem = malloc(sizeof(node));
        if (tmpMem == NULL)
        {
            // free memory
            return 1;
        }

        tmpMem->number = number;
        tmpMem->next = list;
        list = tmpMem;
    }

    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
}

