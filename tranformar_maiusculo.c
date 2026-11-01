#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void transformar_maiusculo(char *texto){
    for(int i=0; texto[i] != '\0'; i++){
        texto[i] = toupper((unsigned char) texto[i]);
    }
}
