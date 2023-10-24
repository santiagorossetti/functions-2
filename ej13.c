#include <stdio.h>
#include <stdlib.h>

int sum (int n){
    if (n == 0) {
        return 0;
    } else{
        return n + sum(n - 1);
    }

}

int main(int argc, char *argv[]){

    int n = atoi(argv[1]);
    int result = sum(n);

    printf("la suma de los primeros %d numeros naturales es %d \n" , n , result );

    return 0;
}