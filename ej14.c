#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else {
        return n * factorial (n - 1);
    }

}

int main (int argc, char *argv[]){

    int n = atoi(argv[1]);
    int result = factorial(n);

    printf("el factorial de %d es %d \n" , n , result );


    return 0;
}