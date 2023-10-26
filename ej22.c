#include <stdio.h>
#include <stdlib.h>

/*Escribir la función int catalan(int n) que devuelva el enésimo número de Catalan. Los primeros doce números
de Catalan son 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 58786. Estos números satisfacen la siguiente relación
recursiva.*/

int catalan (int n , int sum){
    if (n == 0){
         return 1;
    } else{
        return catalan(n - 1 , sum );
    }

}


int main (int argc , char *argv[] ){

    int n = atoi(argv[1]);
    int sum = 1;

    return 0;
}