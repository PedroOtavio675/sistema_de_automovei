#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "struct_veiculo.h"
#include "funcoes.h"

void listar_veiculos(Veiculo v[], int qtd){
   for(int i=0; i<qtd; i++){
    printf("=======================\n");
    printf("Código: %d\n", v[i].codigo);
   printf("Placa: %s\n", v[i].placa);
   printf("Modelo: %s\n", v[i].modelo);
   printf("Marca: %s\n", v[i].marca);
   printf("Ano: %i\n", v[i].ano);
   printf("Proprietário: %s\n", v[i].proprietario);
   printf("Valor: %.2f\n", v[i].valor);
   printf("========================\n");
   }
};

