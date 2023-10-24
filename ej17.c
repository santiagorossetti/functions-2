#include <stdio.h>
#include <stdlib.h>

//Escribir una versión recursiva en C de la función int fibonacci(int n) que devuelva el enésimo número de Fibonacci

int fibonacci (int n ){
    if (n <= 1){
        return n;
    } else {
         return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main (int argc , char *argv[]){

    int n = atoi (argv[1]);
    //int num = 0;

    int result = fibonacci (n);

    printf("el fibonacci de %d es %d" , n , result);

    return 0;
}