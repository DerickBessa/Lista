#include <stdio.h>
#include <string.h>

#define TAM 100
int main(){
    char string[TAM];
    char *ps = string;////////////////// basicamente tudo que se faz com exemplo[] vira *exemplo sem chaves. como se * engolisse as chaves. e por padrao quando representado virasse exemplo[0].
    printf("digite uma palavra\n");
        fgets(ps, sizeof(string), stdin);

        ps[strcspn(ps, "\n")] = '\0';
   
   size_t tamanho = strlen(string);
    /////////////////////////
    printf(" esta foi a palavra\n\n %s \n\n  seu tamanho e %zu unidades", ps, tamanho);
}