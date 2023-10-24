#include <stdio.h>
#include <stdlib.h>

int a = 3;
int b = 9;

void swap (){
    int c = a;
    a = b;
    b = c;

}

int main () {

    printf("valor de a = %d , valor de b = %d\n" , a , b);

    swap();

    printf("valor de a = %d , valor de b = %d\n" , a , b);

    return 0;
}