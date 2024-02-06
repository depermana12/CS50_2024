#include <stdio.h>

int main()
{
    int array[] = {10, 30, 55, 23, 53};

    int myArray = array[0];
    int totalArray = 0;

    for (int i = 0; i < 5; i++){
        if (array[i] > myArray){
            myArray = array[i];
        }
        totalArray += array[i];
        printf("%d\n", array[i]);
    }
printf("the biggest number is %d \n", myArray);
printf("the total number is %d", totalArray);

}