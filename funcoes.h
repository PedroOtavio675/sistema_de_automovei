#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED
int cadastrar_veiculo(Veiculo v[], int *qtd, Veiculo v_lista[], int qtd_lista);

int busca_por_codigo(const Veiculo v[],int qtd,int codigo);

int busca_por_placa(const Veiculo v[], int qtd, char placa[]);

int ler_texto(const char *msg, char *dest, int tam);

int carregar_dados(Veiculo **v, int *capacidade);

int salvar_dados(Veiculo v[],int *qtd);

int contar_veiculos(const char *nome_arquivo);

int aumentar_vetor(Veiculo **v, int *capacidade, int necessario);

void listar_veiculos(Veiculo v[], int qtd);
#endif // FUNCOES_H_INCLUDED
