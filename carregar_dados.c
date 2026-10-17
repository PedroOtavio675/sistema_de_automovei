#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"

int carregar_dados(Veiculo **v, int *capacidade){
   int qtd_veiculos = contar_veiculos("veiculos.dat");
   if(qtd_veiculos==0) return 0;

   if(qtd_veiculos > *capacidade){
      if(!aumentar_vetor(v, capacidade, qtd_veiculos)){
        printf("Sem memória para carregar os dados!\n");
        return -1;
      }
   }

   FILE *f = fopen("veiculos.dat", "rb");
   if(f==NULL)return -1;

   int c = fread(*v, sizeof(Veiculo), qtd_veiculos, f);
   fclose(f);
   printf("Quantidade: %i\n", qtd_veiculos);
   return c;
}
