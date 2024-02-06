#include <stdio.h>

int main(){
    int home[] = {2, 3, 4, 5, 6};
    int *ptr;
    ptr = home;

    for (int i = 0; i < 5; i++){
        printf("%d", ptr[i]);
    }
}