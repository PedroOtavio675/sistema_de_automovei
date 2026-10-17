#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "struct_veiculo.h"
#include "funcoes.h"

int aumentar_vetor(Veiculo **v, int *capacidade, int necessario){
   int nova = *capacidade;
   while (nova<necessario) nova += 2;

   Veiculo *tmp = realloc(*v, nova * sizeof(Veiculo));
   if (tmp==NULL) return 0;

   *v = tmp;
   *capacidade = nova;
   return 1;
}
