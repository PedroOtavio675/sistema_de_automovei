#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"


int alterar_dados(Veiculo v[], int qtd){
     printf("\n");
    printf("\033[36m==================================================\033[0m\n");
    printf("\033[1;36m                ALTERAR DADOS\033[0m\n");
    printf("\033[36m==================================================\033[0m\n");
    printf("\n");
    char placa[8];
    ler_texto("Digite a placa do veículo: ", placa, sizeof(placa));
    transformar_maiusculo(placa);
    int pos = busca_por_placa_v_primario(v, qtd, placa);
    if(pos!=-1){
        system("cls");
        mostrar_veiculo(v[pos]);

    }else{
    printf("Veículo não encontrado!");
    return 0;
    }
}
