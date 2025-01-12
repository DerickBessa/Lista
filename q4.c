#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int *pn = &n;
    int choose;
    printf("digite a quantidade de elementos que o vetor deve conter");
    scanf("%d", &n);
    ///////////////////////

    int vetor_int[*pn];
    float vetor_float[*pn];
    char vetor_string[*pn][100];

////////////////////////////////
do{
    printf(" 1 para int, 2 para float, 3 para char, 0 para sair");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        for(int i=0; i<n ; i++){
        scanf("%d", &vetor_int[i]);
        }
        for(int j=0; j<n ; j++){
            printf("[%02d] \t", vetor_int[j]);
        }
        break;
    
    case 2:
        for(int i=0; i<n ; i++){
        scanf("%f", &vetor_float[i]);
        }
        for(int j=0; j<n ; j++){
            printf("[%02f] \t", vetor_float[j]);
        }
        break;
    case 3:
        for(int i=0; i<n ; i++){
        fgets(vetor_string[i], sizeof(vetor_string[i]), stdin);

        vetor_string[i][strcspn(vetor_string[i],"\n")] = '\0';
        }
        for(int j=0; j<n ; j++){
            printf("%s \t", vetor_string[j]);
        }
        break;        
    case 0:
        break;
    }
}while(choose != 0); 
}