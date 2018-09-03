/*Fa�a uma fun��o que receba um valor n e crie dinamicamente um vetor de n
elementos e retorne um ponteiro. Crie uma fun��o que receba um ponteiro para um
vetor e um valor n e imprima os n elementos desse vetor. Construa tamb�m uma
fun��o que receba um ponteiro para um vetor e libere esta �rea de mem�ria. Ao final,
crie uma fun��o principal que leia um valor n e chame a fun��o criada acima. Depois, a
fun��o principal deve ler os n elementos desse vetor. Ent�o, a fun��o principal deve
chamar a fun��o de impress�o dos n elementos do vetor criado e, finalmente, liberar a
mem�ria alocada atrav�s da fun��o criada para libera��o.*/

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
