/**
* Arquivo: quaisDiv
* Autor: Gabriel Henrique Silva Marques
* Matricula: 12111ETE017
* Criado em: 04/12/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, i, R;
    printf("Digite a quantidade de numeros a ser trabalhada: ");
    scanf("%d", &N);
    int vetor[N];
    for(int i=0; i < N; i++) {
        printf("Digite agora o numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero de referencia: ");
    scanf("%d", &R);

    for(i = 0; i < N; i++){
        
        if(i == 0)
            printf("%d", vetor[i]);

        else
            printf(" %d", vetor[i]);

        if (R % vetor[i] == 0)
            printf("#");
    }
    
    
    return(0);

}