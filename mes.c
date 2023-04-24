#include <stdio.h>

int main(int argc, char** argv) {
    int mes, numDias;
    printf ("Digite o mes \n"); scanf("%d", &mes);
    switch (mes)
    {
        case 2: numDias = 29;
        break;
        case 4: case 6: case 9:
        case 11:
            numDias = 30;
        break;
        default: numDias = 31;
    }
    printf("O mes de numero %d tem %d dias\n", mes, numDias);
}