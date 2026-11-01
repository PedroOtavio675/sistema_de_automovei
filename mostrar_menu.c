#include <stdio.h>
#include <stdlib.h>
#include "struct_veiculo.h"
#include "funcoes.h"

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
