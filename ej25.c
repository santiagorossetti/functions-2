#include <stdio.h>
#include <stdlib.h>


/*Escribir una función recursiva en C que devuelva el promedio de los elementos en un array de enteros.*/

double prom ( int arr[] , int i){
    if (i == 5){
        return 0;
    } else {
        double promedioArr = (arr[i - 1] + (i - 1) * prom(arr, i + 1)) / i;
        return promedioArr;
    }


}

int main(){

    int arr [] = {5 , 7 , 7 , 5};

     int i = 0;

    int result = prom(arr , i);

    printf("el promedio del array es %d \n" , result );

    return 0;
}
