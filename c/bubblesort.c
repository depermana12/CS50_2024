#include <stdio.h>

void bubbleSort (int array[], int length);

int main(){
 
    int number2[] = {1, 3, 2, 8, 6, 5, 7, 9, 4};
    int len = sizeof(number2)/sizeof(number2[0]);

    bubbleSort(number2, len);
 
}

void bubbleSort (int array[], int length){
    for (int i = 0 ; i < length; i++){
        for (int j = 0; j < length - 1 - i; j++){
            if (array[j] < array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;      
            }
        }
    }

    for (int i = 0; i < length; i++){
        printf("%d, ", array[i]);
    }
}