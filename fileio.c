#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL)
    {
        return 1;
    }

    char name[16];
    printf("name: ");
    scanf("%s", name);

    char number[16];
    printf("number: ");
    scanf("%s",number);

    fprintf(file, "%s, %s, ", name, number);

    fclose(file);

}