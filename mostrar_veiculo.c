#include <stdio.h>
#include <stdlib.h>
#include "struct_veiculo.h"
#include "funcoes.h"

void mostrar_veiculo(Veiculo v){
 printf("\033[1;37m[ VEICULO %d ]\033[0m\n", v.codigo);
        printf("\033[36m--------------------------------------------------\033[0m\n");

        printf("\033[1;37mCodigo:\033[0m          %d\n", v.codigo);
        printf("\033[1;37mPlaca:\033[0m           %s\n", v.placa);
        printf("\033[1;37mModelo:\033[0m          %s\n", v.modelo);
        printf("\033[1;37mMarca:\033[0m           %s\n", v.marca);
        printf("\033[1;37mAno:\033[0m             %d\n", v.ano);
        printf("\033[1;37mProprietario:\033[0m    %s\n", v.proprietario);
        printf("\033[1;37mValor:\033[0m           R$ %.2f\n", v.valor);

        printf("\033[36m==================================================\033[0m\n");
        printf("\n");
}
