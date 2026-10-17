#ifndef STRUCT_H_INCLUDED
#define STRUCT_H_INCLUDED

typedef struct{
int codigo;
char placa[8];
char modelo[30];  //Onix, Corolla, Fusca;
char marca[20]; //Chevrolet, Toyota, volks;
int ano;
char proprietario[50];
float valor;
} Veiculo;

#endif // STRUCT_H_INCLUDED
