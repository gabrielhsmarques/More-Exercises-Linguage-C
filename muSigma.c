/**
* Arquivo: muSigma
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 04/12/2022
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float mean(float *vetor, int N){
    float mean, soma;
    int i;

    for(i = 0; i < N; i++){
        soma += vetor[i];
    }

    mean = soma/N;
    return(mean);
}

float dv(float *vetor, int tamanho, float media){
    
    int i;
    float sub, sum, div, desvio;

    for (i = 0; i < tamanho; i++)
    {
        sub = pow((vetor[i] - media), 2);
        sum += sub;

    }
    div = sum/tamanho;
    desvio = sqrt(div);

    return(desvio);
}


int main(){

    int tamanho, i;
    float media;

    printf("Digite a quantidade de numeros a ser trabalhada: ");
    scanf("%d", &tamanho);

    float vetor[tamanho];

    for(i=0; i < tamanho; i++) {
        printf("Digite agora o numero: ");
        scanf("%f", &vetor[i]);
    }
    media = mean(vetor, tamanho);
    printf("media %g\n", media);
    printf("desvio %g", dv(vetor, tamanho, media));
    return(0);
}