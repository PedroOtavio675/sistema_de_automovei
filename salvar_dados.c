#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"


int salvar_dados(Veiculo v[],int *qtd){
    FILE *f = fopen("veiculos.dat", "ab");  //ABRE O ARQUIVO

    if(f==NULL) return -1;  // SE NÃO TIVER NADA RETORNA -1

    int gravados = fwrite(v, sizeof(Veiculo), *qtd, f);   //GUARDA OS VEICULOS DO VETOR QUE FICA APENAS OS CADASTRADOS NO MOMENTO NO ARQUIVO BINÁRIO

    fclose(f); //FECHA O ARQUIVO

    if(gravados != qtd) return -1; //SE O NUMERO DE CARROS CADASTRARDOS FOR DIFERENTE DO QUE FOI PEDIDO DEU RUIM E RETORNA -1

    *qtd = 0; //ZERA O CONTADOR PARA NÃO SALVAR REPETIDO

    return 1; // SUCESSO
}
