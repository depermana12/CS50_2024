#include <stdio.h>

int main(){

    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%d %s", &i, str);
    printf("your just print a age %d name %s", i, str);

    return 0;
}