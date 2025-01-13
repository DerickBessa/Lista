#include <stdio.h>
#include <string.h>

int main (){

    char x[100] = "ola mundo";
    char y[100] = ", que dia lindo";
    char *px = x;
    char *py = y;

    strcat(px, py);
    printf("%s \n %p + %p", px, (void*)px, (void*)py);
}