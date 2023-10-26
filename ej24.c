#include <stdio.h>
#include <stdlib.h>

/*Escribir una función recursiva en C que devuelva la suma de todos los elementos en un array*/

int sumArray (int i , int arr[]) {
    if (i == 5){
        return 0;
    } else{
        return arr[i] + sumArray( i + 1 , arr );
    }
}


int main () {

    int arr[] = {1 , 2 , 3 , 4 , 5};
    int i = 0;

    int result = sumArray(i , arr);

    printf("la suma del array es %d \n" , result );

    return 0;
}