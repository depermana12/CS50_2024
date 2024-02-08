#include <stdio.h>
#include <string.h>

int main(void)
{
    // struct can hold a member of any datatype
    // typedef is keyword to invent the following data type, in this one is calle person
    // create structure data type called person
    typedef struct
    {
        char *name;
        char *number;
    }person;

    const int CAPACITY = 3;
    
    person people[CAPACITY];

    people[0].name = "carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "david";
    people[1].number = "+1-617-495-1011";

    people[2].name = "john";
    people[2].number = "+1-949-468-2750";

    char nameis[] = "david";    
    for (int i = 0; 1 < CAPACITY; i++)
    {
        if (strcmp(people[i].name, nameis) == 0)
        {
            printf("found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found");
    return 1;


    // // simple algoritm of phonebook, where if the person number is equal
    // // to what we looking for, then print the number
    // // method using name and number in the same index
    // char *names[] = {"carter", "david", "john"};
    // char *number[] = {"+1-617-495-1000", "+1-617-495-1000", "+1-949-468-2750"};

    // char name[] = "john";    
    // for (int i = 0; 1 < 3; i++)
    // {
    //     if (strcmp(names[i], name) == 0){
    
    //         printf("found %s\n", number[i]);
    //         return 0;

    //     }

    // }
    // printf("Not found");
    // return 1;
}