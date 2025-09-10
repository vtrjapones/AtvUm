#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int matriz[3][2];
    int i, j;
    int maiorElemento;
    
    // Carregando a matriz
    printf("Digite os elementos da matriz 3x2:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Mostrando a matriz original
    printf("\nMatriz original:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Recalculando a matriz
    for(i = 0; i < 3; i++) {
        // Encontrando o maior elemento da linha
        maiorElemento = matriz[i][0];
        for(j = 1; j < 2; j++) {
            if(matriz[i][j] > maiorElemento) {
                maiorElemento = matriz[i][j];
            }
        }
        
        // Multiplicando cada elemento da linha pelo maior elemento
        for(j = 0; j < 2; j++) {
            matriz[i][j] = matriz[i][j] * maiorElemento;
        }
    }
    
    // Mostrando a matriz recalculada
    printf("\nMatriz recalculada:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}