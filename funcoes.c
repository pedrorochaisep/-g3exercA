#include <stdio.h>
#include "funcoes.h"

void incrementa(int a, int *p) {
    a++; 
    (*p)++; 
    
    printf("Valor de 'a': %d\n", a);
    printf("Valor apontado por 'p': %d\n", *p);
}