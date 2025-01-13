#include <stdio.h>
#include <string.h>

int main(){
    char x[100] = "1";
    char y[100] = "ola 123, mundo";
    char *px = x;
    char *py = y;
    if(strspn(px, py))printf("a string '%s' contem o caractere '%s' ", py,px);
    

}