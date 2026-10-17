#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "struct_veiculo.h"
#include "funcoes.h"

int busca_por_codigo(const Veiculo v[],int qtd,int codigo){
if(qtd == 0){
    return -1;
}
if(v[qtd-1].codigo == codigo) return qtd - 1;
return busca_por_codigo(v, qtd - 1, codigo);
}
