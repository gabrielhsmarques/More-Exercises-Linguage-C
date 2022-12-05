/**
* Arquivo: diferencas
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 04/12/2022
*/

#include <stdio.h>

int main()
{
    int tamanho;

    printf("Digite a quantidade de numeros a ser trabalhada: ");
    scanf("%d", &tamanho);
    
    
    float vetor[tamanho];
    int i;
    
    
    for(i = 0; i < tamanho; i++){
        printf("Digite agora o numero: ");
        scanf("%f", &vetor[i]);
    }  
    int tamanho2 = tamanho-1;
    
    float resultado[tamanho2];    
        
    for(i = 0; i < tamanho2; i++)
        resultado[i] = vetor[i+1] - vetor[i];    
        
    for(i = 0; i < tamanho2; i++)
        printf("%g, ", resultado[i]);
        
    float maior = resultado[0];
    float menor = resultado[0];
        
    for(i = 0; i < tamanho2; i++){
        if(maior < resultado[i])
            maior = resultado[i];
            
        if(menor > resultado[i])
            menor = resultado[i];
    }
        
    printf("  %g  %g ", menor, maior);
    

    return 0;
}