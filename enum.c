#include <stdio.h>

int main()
{
    typedef enum{
        male,
        female
    }gender;

    gender person = female;
    printf("%i", person);

    // enum gender {
    //     male,
    //     female
    // } ;

    // enum gender mygender;
    // mygender = 0;

    // printf("%d", mygender);
}