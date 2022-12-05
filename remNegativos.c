/**
* Arquivo: remNegativos
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 04/12/2022
*/

#include <stdio.h>
#include <stdlib.h>

int empty(int *vetor, int tamanho){
    int i, count = 0;
    for(i = 0; i < tamanho; i++){
        if (vetor[i] >= 0)
        {
            count++;
        }
    }
    return(count);
}

void clear(int *vetor, int tamanho, int vazio){
    int vetposi[vazio], i, j;
    for ( i = 0, j = 0; i < tamanho; i++)
    {
        if (vetor[i] >= 0)
        {
            vetposi[j] = vetor[i];
            j++;
        }
        
    }
    for ( j = 0; j < vazio; j++)
    {
        printf("%d ", vetposi[j]);
    }   
}

int main(){
    int tamanho, i, vazio;
    printf("Digite a quantidade de numeros a ser trabalhada: ");
    scanf("%d", &tamanho);

    int vet[tamanho];

    for ( i = 0; i < tamanho; i++)
    {
        printf("Digite agora o numero: ");
        scanf("%d", &vet[i]);
    }

    vazio = empty(vet, tamanho);
    if (vazio == 0)
    {
        printf("vazio");
        return(0);
    }
    
    clear(vet, tamanho, vazio);

    return(0);

}