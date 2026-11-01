#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "struct_veiculo.h"
#include "funcoes.h"

int busca_por_placa_v_primario(const Veiculo v[], int qtd, char placa[]){
for(int i=0; i!=qtd; i++){
    if(strcmp(v[i].placa, placa) == 0) return i;
}
return -1;
}
