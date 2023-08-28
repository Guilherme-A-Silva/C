#include <stdio.h>

int main() {
    int valores[10];
    int valoresPares[10]; 
    int contaPares = 0;   
    
    int i;
    
   for (i = 0; i < 10; i++) {
        printf("Digite o %d valor:\n", i+1);
        scanf("%d", &valores[i]);
    }
    
   
    for (i = 0; i < 10; i++) {
        if (valores[i] % 2 == 0) {
            valoresPares[contaPares] = valores[i];
            contaPares++;
        }
    }
    
    printf("Vetor de pares :\n");
    for (i = 0; i < contaPares; i++) {
        printf("%d\n", valoresPares[i]);
    }
    
    return 0;
}
