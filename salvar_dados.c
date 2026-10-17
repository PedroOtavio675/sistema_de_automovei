#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"


int salvar_dados(Veiculo v[],int qtd){
    FILE *f = fopen("veiculos.dat", "ab");

    if(f==NULL) return -1;

    int gravados = fwrite(v, sizeof(Veiculo), qtd, f);

    fclose(f);

    if(gravados != qtd) return -1;

    return 1;
}
