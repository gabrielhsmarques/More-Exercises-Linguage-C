/**
* Arquivo: produtorio
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 04/12/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, i;
    printf("Digite a quantidade de numeros a ser trabalhada: ");
    scanf("%d", &N);
    float vetor[N], sum;
    for(int i=0; i < N; i++) {
        printf("Digite agora o numero: ");
        scanf("%f", &vetor[i]);
    }
    sum = vetor[0];
    i = 0; 
    while (i < N)
    {
        sum = sum * vetor[i];

        i++;
    }

    for(i = 0; i < N; i++){

        if (i < N - 1)
            printf("%g * ", vetor[i]);

        if(i == N - 1)
            printf("%g = %g", vetor[i], sum);
    }
    return(0);
}