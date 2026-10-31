#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"

//SIMPLISMENTE CONTA QUANTOS CARROS ESTÃO NO ARQUIVO
int contar_veiculos(const char *nome_arquivo){

 FILE *f = fopen(nome_arquivo, "rb");
 if(f==NULL) return 0;

 fseek(f, 0, SEEK_END); //"MANDA O CURSOR PRO FINAL"
 long bytes = ftell(f); //FALA O TAMANHO EM BYTES
 fclose(f);

 return (int)(bytes/sizeof(Veiculo));
}
