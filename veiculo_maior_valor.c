#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"

void veiculo_maior_valor(Veiculo v[], int qtd){
    int indice=0, m_valor=v[0].valor;
    for(int i=1;i<qtd; i++){
        if(m_valor<v[i].valor){
            m_valor=v[i].valor;
            indice=i;
        }
    }
    mostrar_veiculo(v[indice]);
}
