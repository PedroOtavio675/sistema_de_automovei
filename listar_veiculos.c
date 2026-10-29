#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "struct_veiculo.h"
#include "funcoes.h"

void listar_veiculos(Veiculo v[], int qtd){
    system("cls");

    printf("\n");
    printf("\033[36m==================================================\033[0m\n");
    printf("\033[1;36m              LISTA DE VEICULOS\033[0m\n");
    printf("\033[36m==================================================\033[0m\n");
    printf("\n");

    for(int i = 0; i < qtd; i++){
        printf("\033[1;37m[ VEICULO %d ]\033[0m\n", i + 1);
        printf("\033[36m--------------------------------------------------\033[0m\n");

        printf("\033[1;37mCodigo:\033[0m          %d\n", v[i].codigo);
        printf("\033[1;37mPlaca:\033[0m           %s\n", v[i].placa);
        printf("\033[1;37mModelo:\033[0m          %s\n", v[i].modelo);
        printf("\033[1;37mMarca:\033[0m           %s\n", v[i].marca);
        printf("\033[1;37mAno:\033[0m             %d\n", v[i].ano);
        printf("\033[1;37mProprietario:\033[0m    %s\n", v[i].proprietario);
        printf("\033[1;37mValor:\033[0m           R$ %.2f\n", v[i].valor);

        printf("\033[36m==================================================\033[0m\n");
        printf("\n");
    }

    if(qtd == 0){
        printf("\033[31mNenhum veiculo cadastrado.\033[0m\n");
    }

    system("pause");
}

