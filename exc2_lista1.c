/*Faça uma função que receba um valor n e crie dinamicamente um vetor de n
elementos e retorne um ponteiro. Crie uma função que receba um ponteiro para um
vetor e um valor n e imprima os n elementos desse vetor. Construa também uma
função que receba um ponteiro para um vetor e libere esta área de memória. Ao final,
crie uma função principal que leia um valor n e chame a função criada acima. Depois, a
função principal deve ler os n elementos desse vetor. Então, a função principal deve
chamar a função de impressão dos n elementos do vetor criado e, finalmente, liberar a
memória alocada através da função criada para liberação.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int * cria(int n);
void imprime(int *vet, int n);
int ** libera(int *vet);

int main(){
    int numero, *vetor;
    printf("digite o numero: ");
    scanf("%d", &numero);
    vetor= cria(numero);
    printf("\n digite os elementos do vetor: ");
    for(int i=0; i<numero; ++i){
        scanf("%d ", &vetor[i]);
    }
    imprime(vetor,numero);
    libera(vetor);
}
int * cria(int n){
    malloc(n*sizeof(int));
}
void imprime(int *vet, int n){
    printf("vetor: ");
    for(int i=0; i<n; i++){
        printf("%d ", vet[i]);
    }
}
int ** libera(int *vet){
    free(vet);
    printf("Memoria liberada com sucesso");
}
