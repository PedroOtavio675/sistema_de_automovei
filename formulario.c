#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include "struct_veiculo.h"
#include "funcoes.h"


int formulario(Veiculo *novo, Veiculo v_primario[], int qtd_primario, Veiculo v_secundario[], int qtd_secundario){
    int invalido;

    do {
        invalido = 0;
        novo->codigo = ler_int("Codigo: ");
        if(novo->codigo == 0){
            return 0;
        }
        if (novo->codigo <= 0) {
            printf("\033[31mCodigo invalido!\033[0m\n");
            invalido = 1;
        } else {
            if (busca_por_codigo_v_primario(v_primario, qtd_primario, novo->codigo) != -1){
            printf("\033[31mEsse codigo ja existe!\033[0m\n");
            invalido = 1;
            }else if(busca_por_codigo_v_secundario(v_secundario, qtd_secundario, novo->codigo) != -1){
            printf("\033[31mEsse código está salvo temporariamente!\033[0m\n");
            invalido = 1;
            }
        }
    } while (invalido);

    do {
        invalido = 0;
        int sair = ler_texto("Placa: ", novo->placa, sizeof(novo->placa));
        if(sair==0){
            return 0;
        }
        transformar_maiusculo(novo->placa);

        if (strlen(novo->placa) != 7) {
            printf("\033[31mPlaca invalida! Use 7 caracteres.\033[0m\n");
            invalido = 1;
        } else {
            if (busca_por_placa_v_primario(v_primario, qtd_primario, novo->placa) != -1){
                printf("\033[31mEssa placa ja existe!\033[0m\n");
            invalido = 1;
            }else if(busca_por_placa_v_secundario(v_secundario, qtd_secundario, novo->placa)!=-1){
                printf("\033[31mEssa placa está salva temporariamente!\033[0m\n");
            invalido = 1;
            }
        }
    } while (invalido);

    int sair = ler_texto("Modelo: ", novo->modelo, sizeof(novo->modelo));
    if(sair==0){
            return 0;
        }
    sair = ler_texto("Marca: ", novo->marca, sizeof(novo->marca));
    if(sair==0){
            return 0;
        }

    do {
        novo->ano = ler_int("Ano: ");
        if(novo->ano == 0){
            return 0;
        }
        invalido = (novo->ano < 1900 || novo->ano > 2027);
        if (invalido) {
            printf("\033[31mAno invalido!\033[0m\n");
        }
    } while (invalido);

    sair = ler_texto("Proprietario: ", novo->proprietario, sizeof(novo->proprietario));
    if(sair==0){
            return 0;
        }
    do {
        novo->valor = ler_float("Valor: ");
        if(novo->valor == 0){
            return 0;
        }
        invalido = (novo->valor <= 0);
        if (invalido) {
            printf("\033[31mValor invalido!\033[0m\n");
        }
    } while (invalido);

    return 1;
}
