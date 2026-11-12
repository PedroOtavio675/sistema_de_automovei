
#include <stdio.h>
#include "struct_veiculo.h"

float valor_medio(Veiculo v[], int qtd){

    printf("\n");
    printf("\033[36m========================================\033[0m\n");
    printf("\033[1;36m          VALOR MÉDIO DOS VEÍCULOS\033[0m\n");
    printf("\033[36m========================================\033[0m\n");

    if(qtd == 0){
        printf("\033[1;31mNenhum veículo cadastrado!\033[0m\n");
        return 0;
    }

    float soma = 0;

    for(int i = 0; i < qtd; i++){
        soma += v[i].valor;
    }

    float media = soma / qtd;

    printf("\033[1;32mValor médio calculado com sucesso!\033[0m\n");
    printf("Valor médio: R$ %.2f\n", media);

    return media;
}
