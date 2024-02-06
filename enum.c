#include <stdio.h>

int main(){
    enum gender {
        male,
        female
    } ;

    enum gender mygender;
    mygender = 0;

    printf("%d", mygender);
}