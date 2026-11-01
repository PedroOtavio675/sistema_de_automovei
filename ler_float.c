#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"

float ler_float(const char *msg){
  char temporario[32];
  ler_texto(msg, temporario, sizeof(temporario));
  return (float) atof(temporario);
}
