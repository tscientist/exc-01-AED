#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Ler(int * vet, int num);
int main(){
    int n, *vetor;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    vetor = malloc(n * sizeof(int));
    Ler(vetor, n);

    printf("Vetor: ");
    for(int i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }
    free(vetor);
}
void Ler(int * vet, int num){
    printf("Digite os elementos: ");
    for(int i=0; i<num; i++){
        scanf("%d", &vet[i]);
    }
}
