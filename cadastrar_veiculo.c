#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"


// OS cadastros ficam salvos em um array de struct e só depois que é usado a opção de salvar eles vão para o arquivo;



int cadastrar_veiculo(Veiculo v_secundario[], int *qtd_secundario, Veiculo v_primario[], int qtd_primario) {
    Veiculo novo;
    int invalido;

    printf("\n\033[36m==================================================\033[0m\n");
    printf("\033[1;36m              CADASTRO DE VEICULO\033[0m\n");
    printf("\033[36m==================================================\033[0m\n");
    printf("              Digite 0 para sair\n\n");

    if(!formulario(&novo, v_primario, qtd_primario, v_secundario, *qtd_secundario)){
        return 0; // USUARIO CANCELOU
    }

    v_secundario[*qtd_secundario] = novo;    // Grava no vetor global temporario
    (*qtd_secundario)++;

    printf("\n\033[32mVeiculo cadastrado com sucesso!\033[0m\n");
    return 1;
}
