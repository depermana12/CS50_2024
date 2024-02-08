#include <stdio.h>

int main(){
    int number[] = {2, 3, 4, 5, 6};
    
    int total = 1;
    for (int i = 0 ; i < 5; i++){
        total *= number[i];
        printf("%d\n", number[i]);
        
    }
    printf("%d", total);
}