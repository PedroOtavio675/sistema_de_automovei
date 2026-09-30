#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
#include "funcoes.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char op_char[10], op_sair_char[10];
    int op_num, op_sair_num;
    int tamanhoTela = 80;


   do {
        printf("\n");
        printf("\033[33m======================================================\033[0m\n");
        printf("\033[1;33m           SISTEMA DE CADASTRO DE VEICULOS   \033[0m\n");
        printf("\033[33m======================================================\033[0m\n");
        printf("\033[1;33m     1. Cadastrar veiculo   13. Carregar dados\n");
        printf("     2. Listar veiculos     3. Buscar por codigo\n");
        printf("     4. Buscar por placa    5. Alterar dados\n");
        printf("     6. Excluir veiculo     7. C. valor m. veiculos\n");
        printf("     8. V. de maior valor   9. Ordenar veiculos\n");
        printf("     10. Busca sequencial   11. Busca binaria\n");
        printf("     12. Salvar dados       14. Sair\033[0m\n");
        printf("\033[33m======================================================\033[0m\n");
        printf("Digite uma opcao: ");
        fgets(op_char, sizeof(op_char), stdin);
        op_num = atoi(op_char);
        switch (op_num) {
            case 1:
                system("cls");
                printf("\n[1] Cadastrar veículo\n");
                break;

            case 2:
                system("cls");
                printf("\n[2] Listar veículos\n");
                break;

            case 3:
                system("cls");
                printf("\n[3] Buscar por código\n");
                break;

            case 4:
                system("cls");
                printf("\n[4] Buscar por placa\n");
                break;

            case 5:
                system("cls");
                printf("\n[5] Alterar dados\n");
                break;

            case 6:
                system("cls");
                printf("\n[6] Excluir veículo\n");
                break;

            case 7:
                system("cls");
                printf("\n[7] Calcular valor médio dos veiculos\n");
                break;

            case 8:
                system("cls");
                printf("\n[8] Identificar veiculo de maior valor\n");
                break;

            case 9:
                system("cls");
                printf("\n[9] Ordenar veiculos\n");
                break;

            case 10:
                system("cls");
                printf("\n[10] Busca sequencial\n");
                break;

            case 11:
                system("cls");
                printf("\n[11] Busca binária\n");
                break;

            case 12:
                system("cls");
                printf("\n[12] Salvar dados\n");
                break;

            case 13:
                system("cls");
                printf("\n[13] Carregar dados\n");
                break;

            case 14:
                printf("\033[1;31mVocê tem certeza que deseja sair?\n");
                printf("Digite 1 para sair ou aperte qualquer tecla para ficar: [ ]\b\b\033[0m");
                fgets(op_sair_char, sizeof(op_sair_char), stdin);
                op_sair_num = atoi(op_sair_char);
                if(op_sair_num==1){
                        printf("\nProgama encerrado, volte sempre!\n\n");
                   break;
                }else{
                    op_num=0;
                }
            default:
                if(op_sair_num!=0&&op_num==0){
                    system("cls");
                    printf("\033[32mObrigado por voltar!\033[0m\n");
                }else{
                    system("cls");
                printf("\nOpção inválida! Tente novamente.\n");
                }
        }
    } while (op_num != 14);
    return 0;
}
