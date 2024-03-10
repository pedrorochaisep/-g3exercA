#include <stdio.h>
#include "funcoes.h"

int main() {
    int e = 10;
    int f = 10;
    
    printf("Antes de chamar a função incrementa:\n");
    printf("Valor de 'e': %d\n", e);
    printf("Valor de 'f': %d\n", f);
    
    
    incrementa(e, &f);
    
    printf("Depois de chamar a função incrementa:\n");
    printf("Valor de 'e': %d\n", e);
    printf("Valor de 'f': %d\n", f);
    
    return 0;
}
