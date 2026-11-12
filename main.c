#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "struct_veiculo.h"
#include "funcoes.h"
#define MAX 100


int main()
{
    setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "C");
    char op_char[10], op_sair_char[10];
    int op_num, op_sair_num = 0;



    Veiculo *veiculos = malloc(MAX * sizeof(Veiculo)); //(PRINCIPAL) CRIA O VETOR (QUE PODE SER REALOCADO) ONDE VÃO SER FEITAS TODAS AS BUSCAS E ATERAÇÕES
    if(veiculos == NULL){
        printf("Sem memória!\n");
        return 1;
    }

    Veiculo *vetor_secundario = malloc(MAX * sizeof(Veiculo)); //(SECUNDARIO) ESSE VETOR É APENAS PARA OS CARROS CADASTRADOS EM EXECUÇÃO

    int capacidade=MAX;
    int qtd_primario = carregar_dados(&veiculos, &capacidade); //CARREGA OS DADOS DO ARQUIVO PARA O VETOR PRINCIPAL E RETORNA A QUANTIDADE
    int qtd_secundario = 0; //VARIAVEL PARA O VETOR SECUNDÁRIO


   int sair = 0;

do {
    mostrar_menu();
    fgets(op_char, sizeof(op_char), stdin);
    op_num = atoi(op_char);
    int pos;

    switch (op_num) {
        case 1:
            system("cls");
            cadastrar_veiculo(vetor_secundario, &qtd_secundario, veiculos, qtd_primario); //VAISALVANDO NO VETOR SECUNDARIO
            break;

        case 2:
            listar_veiculos(veiculos, qtd_primario); //LISTA SÓ O QUE TÁ NO VETOR PRIMARIO
            break;

        case 3:
            int cod = ler_int("Digite o código: ");
            pos = busca_por_codigo_v_primario(veiculos, qtd_primario, cod);
            if(pos!=-1){
                system("cls");
                mostrar_veiculo(veiculos[pos]);
            }else{
            system("cls");
            printf("\033[31mNenhum veículo  encontrado!\033[0m\n");
            }
            break;
        case 4:
            char placa[8];
            ler_texto("Digite a placa: ", placa, sizeof(placa));
            transformar_maiusculo(placa);
            pos = busca_por_placa_v_primario(veiculos, qtd_primario, placa);
            if(pos!=-1){
                system("cls");
                mostrar_veiculo(veiculos[pos]);
            }else{
            system("cls");
            printf("\033[31mNenhum veículo  encontrado!\033[0m\n");
            }
            break;

        case 5:
            if(!alterar_dados(veiculos, qtd_primario)){
               carregar_dados(&veiculos, &capacidade);
            }
            break;

        case 6:
            system("cls");
            if(excluir_veiculo(veiculos, &qtd_primario)){
                carregar_dados(&veiculos, &capacidade);
            }
            break;
        case 7:
           system("cls");
           valor_medio(veiculos, qtd_primario);
           system("pause");
           system("cls");
            break;

        case 8:
           void veiculo_maior_valor(Veiculo v[], int qtd);
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
            if (salvar_dados(vetor_secundario, &qtd_secundario) == 1) { //SALVA OS DADOS DO VETOR SECUNDARIO NO ARQUIVO
                int r = carregar_dados(&veiculos, &capacidade); //ATUALIZA O VETOR PRIMÁRIO
                if(r>=0) qtd_primario=r;
                system("cls");
                printf("\033[32mDados salvos com sucesso!\033[0m\n");
                qtd_secundario = 0;
            } else {
                system("cls");
                printf("\033[31mErro ao salvar no arquivo!\033[0m\n");
            }
            break;

        case 13:
            //CARREGA DO ARQUIVO PRO VETOR PRIMARIO
            qtd_primario=carregar_dados(&veiculos, &capacidade);
            if(qtd_primario!=-1){
                printf("Dados carregados com sucesso!");
            }else{
                qtd_primario=0;
                printf("Algo deu errado!");
            }
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
