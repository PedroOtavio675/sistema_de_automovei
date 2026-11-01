#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED
void transformar_maiusculo(char *texto);
void mostrar_menu();
void mostrar_veiculo(Veiculo v);

int formulario(Veiculo *novo, Veiculo v_primario[], int qtd_primario, Veiculo v_secundario[], int qtd_secundario);

int cadastrar_veiculo(Veiculo v[], int *qtd, Veiculo v_lista[], int qtd_lista);

int busca_por_codigo_v_primario(const Veiculo v[],int qtd,int codigo);
int busca_por_codigo_v_secundario(const Veiculo v[],int qtd,int codigo);

int busca_por_placa_v_primario(const Veiculo v[], int qtd, char placa[]);
int busca_por_placa_v_secundario(const Veiculo v[], int qtd, char placa[]);

int ler_texto(const char *msg, char *dest, int tam);
int ler_int(const char *msg);
float ler_float(const char *msg);

int carregar_dados(Veiculo **v, int *capacidade);

int salvar_dados(Veiculo v[],int *qtd);

int contar_veiculos(const char *nome_arquivo);

int aumentar_vetor(Veiculo **v, int *capacidade, int necessario);

void listar_veiculos(Veiculo v[], int qtd);

int alterar_dados(Veiculo v[], int qtd);
#endif // FUNCOES_H_INCLUDED
