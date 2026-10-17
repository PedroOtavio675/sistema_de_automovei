#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"

int contar_veiculos(const char *nome_arquivo){

 FILE *f = fopen(nome_arquivo, "rb");
 if(f==NULL) return 0;

 fseek(f, 0, SEEK_END);
 long bytes = ftell(f);
 fclose(f);

 return (int)(bytes/sizeof(Veiculo));
}
