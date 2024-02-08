#include <stdio.h>
#include <string.h>

int main (){
    char fruits [][10] = {"Apple", "banana", "durian",};
    strcpy(fruits[0], "Guava");

    for (int i = 0; i < sizeof(fruits)/sizeof(fruits[0]); i ++){
        printf("%s \n", fruits[i]);
    }
        
}