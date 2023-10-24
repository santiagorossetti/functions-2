#include <stdio.h>
#include <stdlib.h>


//Escribir una función recursiva que devuelva la suma de todos los dígitos de un número 𝑛.

int sum (int n) {
    if (n == 0) {
        return 0;
    } else{
        return n % 10 + sum(n / 10);
    }

}


int main (int argc, char *argv[]){

    int n = atoi(argv[1]);
    int result = sum(n);

    printf("la suma de todos los digitos de %d es %d \n" , n , result);

    return 0;
}