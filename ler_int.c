#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"

int ler_int(const char *msg){
   char temporario[32];
   ler_texto(msg, temporario, sizeof(temporario));
   return atoi(temporario);
}
