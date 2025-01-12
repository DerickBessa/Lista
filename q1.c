#include <stdio.h>

int main(){
    int x = 2;
    int y = 3; 


    int *px = &x;
    int *py = &y;
    int soma;

    int *psoma = &soma;
    

    *psoma = *px + *py;

    printf(" a  soma de %d+%d = %d [%p]" ,*px,*py,*psoma,(void*)psoma);

}