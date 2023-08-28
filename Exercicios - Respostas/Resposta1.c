#include <stdio.h>

int main() {
    int valores[10];
    
    int i;
    int j;
    
    for (i = 0; i < 10; i++) {
        printf("Digite o %d valor:\n", i+1);
        scanf("%d", &valores[i]);
    }
    
    for (i = 0; i < 9; i++) {
        int indiceMax = i;
        for (j = i + 1; j < 10; j++) {
            if (valores[j] > valores[indiceMax]) {
                indiceMax = j;
            }
        }
        
        // Trocar o maior valor para a posição atual
        int temp = valores[i];
        valores[i] = valores[indiceMax];
        valores[indiceMax] = temp;
    }
    
    printf("Valores ordenados do maior para o menor:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", valores[i]);
    }
    
    return 0;
}