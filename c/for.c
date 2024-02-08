#include <stdio.h>

int main (){
    for (int i = 0; i < 100; i++){
        if (i & 7){
            printf("%d percent done\n", i);
        }
    }
}