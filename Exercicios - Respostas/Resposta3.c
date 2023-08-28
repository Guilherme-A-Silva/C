#include <stdio.h>

int main() {
    int valores[10];
    int valorBuscado;
    int posicao = -1;  // Inicializamos como -1 para indicar que o valor não foi encontrado
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d valor:\n", i+1);
        scanf("%d", &valores[i]);
    }
    
    printf("Digite o valor a ser buscado:\n");
    scanf("%d", &valorBuscado);
    
    for (i = 0; i < 10; i++) {
        if (valores[i] == valorBuscado) {
            posicao = i;  // Guardamos a posição onde o valor foi encontrado
            break;  // Saímos do loop assim que o valor é encontrado
        }
    }
    
    if (posicao != -1) {
        printf("O valor %d foi encontrado na posicao %d.\n", valorBuscado, posicao);
    } else {
        printf("O valor %d não foi encontrado no vetor.\n", valorBuscado);
    }
    
    return 0;
}
