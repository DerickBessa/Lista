#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
int main(){
    int temp;
    srand(time(NULL));
    int lista[TAM];
    for (int i =0; i <TAM; i++){
        lista[i]=rand() % 10;
    }
     for(int i=0; i < TAM;i++){
        printf(" %d \n" ,lista[i]);
    }
    ////////////////////
    for(int i = 0; i < TAM;i++){
        for(int j = 0; j < TAM;j++){
            int *pi = &lista[i];
            int *pj = &lista[j];
            if(*pj > *pi){
                temp = *pi;
                *pi = *pj;
                *pj = temp;
            } 
        }
    }
    for(int i=0; i < TAM;i++){
        printf("\n %d" ,lista[i]);
    }
}