#ifndef MATRIZES_H
#define MATRIZES_H

typedef struct{
double real;
double imag;
}complexo;

void print_name();

int soma(complexo a[][3], complexo b[][3], complexo mxt[][3]);
int teste_soma();

int transposta(complexo a[][3], complexo mxt[][3]);
int teste_transposta();

int conjugada(complexo a[][3], complexo mxt[][3]);
int teste_conjugada();

int hermitiana(complexo a[][3], complexo mxt[][3]);
int teste_hermitiana();

int subtracao(complexo a[][3], complexo b[][3], complexo mxt[][3]);
int teste_subtracao();

int produto_escalar(complexo a[][3], complexo b[][3], complexo mxt[][3]);
int teste_produtoEscalar();

int produto_matricial(complexo a[][3], complexo b[][3], complexo mxt[][3]);
int teste_produtoMatricial();

#endif
