#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
#include "struct_veiculo.h"
#include "funcoes.h"
#define MAX 100

void mostrar_menu(){
 printf("\n");
printf("\033[36m==================================================\033[0m\n");
printf("\033[1;36m       SISTEMA DE GERENCIAMENTO DE VEICULOS\033[0m\n");
printf("\033[90m                 TCD 6 - ADS\033[0m\n");
printf("\033[36m==================================================\033[0m\n");
printf("\n");
printf("\033[1;37m[ CADASTRO E CONSULTA ]\033[0m\n");
printf(" 1. Cadastrar veiculo       2. Listar veiculos\n");
printf(" 3. Buscar por codigo       4. Buscar por placa\n");
printf(" 5. Alterar dados           6. Excluir veiculo\n");
printf("\n");
printf("\033[1;37m[ RELATORIOS E ALGORITMOS ]\033[0m\n");
printf(" 7. Calcular valor medio    8. Veiculo de maior valor\n");
printf(" 9. Ordenar veiculos       10. Busca sequencial\n");
printf("11. Busca binaria\n");
printf("\n");
printf("\033[1;37m[ ARQUIVOS ]\033[0m\n");
printf("12. Salvar dados           13. Carregar dados\n");
printf("\n");
printf("\033[31m 0. Sair do sistema\033[0m\n");
printf("\033[36m==================================================\033[0m\n");
printf("\nDigite uma opcao: ");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char op_char[10], op_sair_char[10];
    int op_num, op_sair_num = 0;



    Veiculo *veiculos = malloc(MAX * sizeof(Veiculo));
    if(veiculos == NULL){
        printf("Sem memória!\n");
        return 1;
    }

    Veiculo *para_salvar_veiculos = malloc(MAX * sizeof(Veiculo));

    int capacidade=MAX;
    int qtd_no_vetor = carregar_dados(&veiculos, &capacidade);
    int qtd = qtd_no_vetor;


   int sair = 0;

do {
    mostrar_menu();
    fgets(op_char, sizeof(op_char), stdin);
    op_num = atoi(op_char);


    switch (op_num) {
        case 1:
            system("cls");
            cadastrar_veiculo(para_salvar_veiculos, &qtd);
            break;

        case 2:
            listar_veiculos(veiculos, qtd_no_vetor);
            break;

        case 3:
            printf("\n\033[1;37m[3] Buscar por codigo\033[0m\n");
            break;

        case 4:
            printf("\n\033[1;37m[4] Buscar por placa\033[0m\n");
            break;

        case 5:
            printf("\n\033[1;37m[5] Alterar dados\033[0m\n");
            break;

        case 6:
            printf("\n\033[1;37m[6] Excluir veiculo\033[0m\n");
            break;

        case 7:
            printf("\n\033[1;37m[7] Calcular valor medio dos veiculos\033[0m\n");
            break;

        case 8:
            printf("\n\033[1;37m[8] Identificar veiculo de maior valor\033[0m\n");
            break;

        case 9:
            printf("\n\033[1;37m[9] Ordenar veiculos\033[0m\n");
            break;

        case 10:
            printf("\n\033[1;37m[10] Busca sequencial\033[0m\n");
            break;

        case 11:
            printf("\n\033[1;37m[11] Busca binaria\033[0m\n");
            break;

        case 12:
            if (salvar_dados(veiculos, qtd) == 1) {
                system("cls");
                printf("\033[32mDados salvos com sucesso!\033[0m\n");
                qtd = 0;
            } else {
                system("cls");
                printf("\033[31mErro ao salvar no arquivo!\033[0m\n");
            }
            break;

        case 13:
            carregar_dados(&veiculos, &capacidade);
            break;

        case 0:
            printf("\n\033[1;31mVoce tem certeza que deseja sair?\033[0m\n");
            printf("\033[31mDigite 1 para sair ou aperte qualquer tecla para ficar: \033[0m");
            fgets(op_sair_char, sizeof(op_sair_char), stdin);
            op_sair_num = atoi(op_sair_char);

            if (op_sair_num == 1) {
                sair = 1;
                printf("\n\033[36mPrograma encerrado, volte sempre!\033[0m\n\n");
            } else {
                system("cls");
                printf("\033[32mObrigado por ficar!\033[0m\n");
            }
            break;

        default:
            printf("\n\033[31mOpcao invalida! Tente novamente.\033[0m\n");
            break;
    }
} while (!sair);
    free(veiculos);
    return 0;
}
