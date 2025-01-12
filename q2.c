#include <stdio.h>

int main(){

    int x = 2;
    int y = 3;
    int original[2] = {x , y};
///////////////////////

    int *px = &x;
    int *py = &y;

/////////////////////////
    int c = *px;
    int *pc = &c;
    x = *py;
    y = *pc;
    printf("os valores de x = %d e y = %d foram trocados para x = %d e y = %d por meior de ponteiros. \n", original[0], original[1], x , y);

    

}