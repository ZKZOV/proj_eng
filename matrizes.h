/*══════════════════•°• INTERFACE •°•═══════════════════════════*/

/* Conjunto das operações e as definições dos tipos de dados */

#ifndef MATRIZES_H
#define MATRIZES_H

/* Struct que vai guardar dois campo do tipo double; parte real e a parte imaginária. Essa Strucut foi denominada de complexo.*/

typedef struct{
double real;
double imag;
}complexo;

// ----------------------
// Protótipos de Funções
// ----------------------

void print_name();
/*Procedimento de exibição dos nomes dos alunos*/

int soma(complexo a[3][3], complexo b[3][3], complexo mxt[3][3]);
int teste_soma();
//Função para somar números complexos. Recebe as matrizes que irá somar e retornará o valor da matriz resultante;

int transposta(complexo a[3][3], complexo mxt[3][3]);
int teste_transposta();
//Função para transpor matrizes complexas. Recebe as matrizes e retornará suas matrizes transpostas;

int conjugada(complexo a[3][3], complexo mxt[3][3]);
int teste_conjugada();

//Função para conjugada da matrizes complexas. Recebe as matrizes e retornará matrizes conjugada;

int hermitiana(complexo a[3][3], complexo mxt[3][3]);
int teste_hermitiana();

//Função para hermitiana das matrizes complexas. Retonará uma matriz transposta conjugaada.
int subtracao(complexo a[3][3], complexo b[3][3], complexo mxt[3][3]);
int teste_subtracao();

//Função para subtração de números complexos. Recebe as matrizes que irá subtrair e retornará o valor da matriz resultante

int produto_escalar(complexo a[3][3], complexo b[3][3], complexo mxt[3][3]);
int teste_produtoEscalar();

//Função para calcular produto de números complexos. A estrutura que lidar com duas partes reais e imaginárias.

int produto_matricial(complexo a[3][3], complexo b[3][3], complexo mxt[3][3]);
int teste_produtoMatricial();

////////// teste//////
// double teste_calc_svd(int m, int n);

double teste_calc_svd();

#endif

