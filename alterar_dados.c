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
    int pos = busca_por_placa_v_primario(v, qtd, placa);  //pega a posição

    if(pos!=-1){
        system("cls");
        Veiculo prot = v[pos]; // cria uma copia do carro
        mostrar_veiculo(v[pos]);
        if(!formulario(&prot, v, qtd, NULL, 0, pos)){ //Faz as alteraçoes na copia
            printf("Alteração cancelada!!\n");
            return 0;
        }else{
            v[pos]=prot; // Salva a copia em cima da posição original
            if(!salvar_todos(v, qtd)){
                printf("Não foi possivel salvar no arquivo!");
            }else{
              printf("Dados alterados com sucesso!\n");
            }
        }
    }else{
    system("cls");
    printf("Veículo não encontrado!\n");
    return 0;
    }
    return 1;
}
