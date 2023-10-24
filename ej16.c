#include <stdio.h>
#include <stdlib.h>

//Escribir una función recursiva en C int power(int a, int n) que devuelva 𝑎 𝑛

int power (int n , int a){
    if (a == 0) { 
        return 1;
    } else {
        return n * power(n , a - 1);
    }

}

int main (int argc , char *argv[]) {

    int n = atoi (argv[1]);
    int a = atoi (argv[2]);

    int result = power(n , a); 

     printf("el numero %d elevado a %d da como resultado %d\n" , n , a , result);

    return 0;
}