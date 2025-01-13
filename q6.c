#include <stdio.h>
#include <string.h>
#define TAM 100
int main(){

    char x[TAM] = "string a ser copiada";
    char *px = x;
    char destino[TAM];
    char *pd = destino;

    strcpy (pd ,px );
    printf("a string destino q antes era vazia agr contem \n'%s' que estava no endereco %p", pd, (void*)px);
}