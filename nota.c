#include <stdio.h>

int main(int argc, char const *argv[]) {
    int nota;
    printf ("Digite a nota \n"); scanf("%d", &nota);
    switch (nota)
    {
        /*case 0: case 1 : case 2: 
        case 3: case 4: */
        case 0 ... 1:
        printf("Reprovado com média %d \n", nota);
        break;
        //case 5: case 6:
        case 5 ... 6:
        printf("Recuperação com média %d \n", nota);
        break;
        case 7 ... 10:
        printf("Aprovado com média %d \n", nota);
    }
    
}