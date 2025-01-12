#include <stdio.h>
#include <limits.h>
int main(){
    int target = 0;
    int *pt = &target;
    int exit;
    int *pe = &exit;
    int menor= INT_MAX;
    int *pmenor = &menor;
    do{
        printf("deseja comparar?\n\n  DIGITE 1 PARA SIM // \t DIGITE 0 PARA SAIR\n\n");
        scanf("%d", &exit);
        switch (exit)
        {
        
        case 1:
           puts("escolha um numero e irei dizer qual foi o menor escolhido!\n");
        scanf("%d", &target);
        getchar();
            if(*pt < *pmenor){
                *pmenor = *pt;
            };
            printf("o menor numero atualmente = %d\n", *pmenor);
                break;
        case 0:
            printf("programa finalizado com sucesso! \n o menor numero foi %d", *pmenor);
                break;
        }
        }while(exit != 0);
}