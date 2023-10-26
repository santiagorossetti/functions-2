#include <stdio.h>
#include <stdlib.h>


int invert (int n , int sum) {
    
    if (n == 0){
        return sum;
    } else {
        return invert( n / 10 , (sum * 10) + (n % 10));

    }
}


int main (int argc , char *argv[]){
    
    int n = atoi(argv[1]);
    int sum = 0;

    int result = invert(n , sum);

    printf("el inverso de %d es %d \n" , n , result);

    return 0;
}