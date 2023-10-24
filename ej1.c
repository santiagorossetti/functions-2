#include <stdio.h>
#include <stdlib.h>

int x = 0;
int arr [] = {1 , 2 , 5 , 6};

void mas_dos (){
 x += 2;

}

void arr_mas_dos(){
for (int i = 0; i > 3 ; i++){
    arr [i] += 2;
    
}

}

int main () {

printf("%d  " , x);

mas_dos();

printf("%d  " , x);

arr_mas_dos();

printf("%d  " , arr);

return 0;
}