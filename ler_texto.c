#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"

// ler texto e tirar o \n, scanf não le os espaços
int ler_texto(const char *msg, char *dest, int tam) {
    int ok;
    do {
        ok = 1;
        printf("%s", msg);

        if (fgets(dest, tam, stdin) == NULL) {   // erro ou fim da entrada
            dest[0] = '\0';
            return 0;
        }
        size_t pos = strcspn(dest, "\n");
        if (dest[pos] == '\n') {
            dest[pos] = '\0';                    // coube inteiro: só remove o \n
        } else {
            int c = getchar();                   // espia o que sobrou
            if (c != '\n' && c != EOF) {         // sobrou texto: era maior que o permitido
                ok = 0;
                while (c != '\n' && c != EOF)    // descarta o resto da linha
                    c = getchar();
                printf("Texto muito longo! Maximo de %d caracteres.\n", tam - 1);
            }
        }
    } while (!ok);                               // pede de novo

    if(strcmp(dest, "0") == 0){
        return 0;
    }
    return 1;
}
