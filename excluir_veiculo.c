
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"

int excluir_veiculo(Veiculo v[], int *qtd){

    printf("\n");
    printf("\033[36m==================================================\033[0m\n");
    printf("\033[1;36m                EXCLUIR VEÍCULO\033[0m\n");
    printf("\033[36m==================================================\033[0m\n");
    printf("\n");

    char placa[8];

    ler_texto("Digite a placa do veículo: ", placa, sizeof(placa));
    transformar_maiusculo(placa);

    int pos = busca_por_placa_v_primario(v, *qtd, placa);

    if(pos != -1){

        printf("\033[1;32mVeículo encontrado!\033[0m\n");
        mostrar_veiculo(v[pos]);

        printf("\033[1;33mTem certeza que deseja excluir?\033[0m\n");

        char resp[4];

        ler_texto("Digite sim ou nao: ", resp, sizeof(resp));
        transformar_maiusculo(resp);

        if(strcmp(resp, "SIM") == 0){

            for(int i = pos; i < *qtd - 1; i++){
                v[i] = v[i + 1];
            }

            (*qtd)--;
             if(salvar_todos(v, *qtd)){
                 printf("\033[1;32mVeículo excluído com sucesso!\033[0m\n");
             }else{
                printf("\033[1;31mNão foi possivel salvar alteração!\033[0m\n");
             }
        }else{

            printf("\033[1;31mOperação cancelada!\033[0m\n");
            return 0;
        }

    }else{

        system("cls");
        printf("\033[1;31mVeículo não encontrado!\033[0m\n");
        return 0;
    }

    return 1;
}
