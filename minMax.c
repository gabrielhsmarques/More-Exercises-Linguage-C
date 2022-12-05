/**
* Arquivo: minMax
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 04/12/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, x, y;

    printf("Digite a quantidade de numeros a ser trabalhada: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i < n; i++) {
        printf("Digite agora o numero: ");
        scanf("%d,", &vetor[i]);
    }
    i = 1;
    j = 1;
    x = vetor[0];
    y = vetor[0];
    while (i < n) 
    {
        if (vetor[i] > x)
        {
            x = vetor[i];

        }
        i++;
    }
    while (j < n) 
    {
        if (vetor[j] < y)
        {
           y = vetor[j];
        }
        j++;
    }
    for(i = 0; i < n; i++){
        
        if(i == 0)
            printf("%d", vetor[i]);

        else
            printf(" %d", vetor[i]);

        if (vetor[i] == x)
            printf(">");

        if (vetor[i] == y)
            printf("<");    
    }
    return 0;

}