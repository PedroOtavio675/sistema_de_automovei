#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"

int salvar_todos(Veiculo v[], int qtd){
    FILE *f = fopen("veiculos.dat", "wb");

    if(f==NULL)return 0;
    int gravados=fwrite(v, sizeof(Veiculo), qtd, f);
    fclose(f);
    return gravados == qtd;
}
