/*════════════════════════════•°• IMPLEMETAÇÃO •°•════════════════════════════*/

/*************************************************************************************************************
 * Aqui temos a importação das bibliotecas e a inclusão do arquivo matrizes.h.
   Nesse arquivo temos todas as declaração das assinaturas das funções que iremos utilizar aqui nesse arquivo.
 *************************************************************************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <gsl/gsl_linalg.h>
#include "matrizes.h"


void print_name()     //!< uma função print_name.
{
printf("┬┴┬┴┬┴┬┴┬┴┬┴┬ EQUIPE ┴┬┴┬┴┬┴┬┴┬┴┬┴┬ \n\n");

char name1[]= "Izaac Soares";
char name2[]= "Amanda Reis";

printf(" %s\n %s\n \n", name1,name2);
}

/**
* CONTEÚDO DA MATRIZ DECLARADA
*/

complexo a[3][3] = { {{1,2},{9,2},{5,8}},
                     {{4,9},{2,3},{1,4}},
                     {{6,2},{7,8},{2,3}} };

complexo b[3][3] = { {{2,2},{1,1},{3,2}},
                     {{8,4},{6,3},{1,3}},
                     {{4,2},{5,1},{2,2}} };

complexo c[3][3] = { {{4,1},{2,4},{6,2}},
                     {{3,9},{1,2},{3,9}},
                     {{9,3},{6,3},{5,3}} };


complexo d[3][3] = { {{1,2},{3,2},{5,8}},
                     {{6,9},{4,3},{1,4}},
                     {{2,2},{7,8},{3,3}} };

complexo mxt[3][3];


/************************************************
 *             SOMA MATRIZ COMPLEXA
 ***********************************************/

int soma(complexo a[3][3],complexo b[3][3], complexo mxt[3][3]){  //!< uma função soma.

//! A função hospedará três parâmetros; complexo a, b e mxt;
//! As matrizes a e b receberá os valores das matrizes declaradas;
//! mxt receberá os valores das somas das matrizes .
/*! OBS: A logica do código da função soma será a mesma para outras funções aqui implementada. O que mudará são apenas as operações matemáticas.
 */

    int i,j;
    for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
               mxt[i][j].real = a[i][j].real + b[i][j].real;
               mxt[i][j].imag = a[i][j].imag + b[i][j].imag;
            }
    }
    return 0;
}

/////////////////////////////////////////////////
/////////////TESTE OPERAÇÃO SOMA////////////////
///////////////////////////////////////////////

int teste_soma(){  //!< Aqui função teste_soma.
    int i,j;
    printf("====== TESTE DA OPERAÇÃO SOMA ======\n\n");
    printf("MATRIZ A:\n\n");

// Preenchimento Da Matriz A.
//! Para inicializar a matriz 3x3 utilizamos uma estrutura de for aninhado.
/*! OBS: A logica do código da estrutura for aninhado para inicializar a matriz servira como modelo para as outras estruturas do for aqui implementado.
 */

     for(i = 0;i < 3; i++){                                //!< Aqui controle da linha.
     printf("\t |");                                      //!< Aqui imprimir | que da impressão de [].
            for(j = 0; j < 3; j++){                      //!< Aqui controle da coluna.
                    printf(" %.1f |", a[i][j].real);    //!< Aqui imprimir a matriz A.
                }
                printf("\n");
        }
        printf("\n");

    printf("MATRIZ B:\n\n");

     for(i = 0;i < 3; i++){                                  //!< Aqui controle da linha.
     printf("\t |");                                        //!< Aqui imprimir | que da impressão de [].
            for(j = 0; j < 3; j++){                        //!< Aqui controle da coluna.
                    printf(" %.1f |",b[i][j].real);       //!< Aqui imprimir a matriz B.
                }
                printf("\n");
        }
        printf("\n");

    soma(a,b, mxt);      //!<  Aqui soma matriz c,d e mxt receberá o valor dessa soma.

     printf("RESULTADO A + B: \n\n");

     for(i = 0;i < 3; i++){                                        //!< Aqui controle da linha.
            for(j = 0; j < 3; j++){                               //!< Aqui controle da coluna.
                    printf(" \t %.1f", mxt[i][j].real);          //!< Aqui imprimir a matriz resultante da soma da matrizes A e B.
                }
                printf("\n");
        }
        printf("\n\n");

    printf("MATRIZ C:\n\n");

    for(i = 0; i < 3; i++){                        //!< Aqui controle da linha.
        printf("\t |");                           //!< Aqui imprimir | que da impressão de [].
            for(j = 0; j < 3; j++){              //!< Aqui controle da coluna.
                printf(" %.1f + %.1fj |",c[i][j].real,c[i][j].imag);    //!< Aqui imprimir a matriz C, parte real e imaginária.
                }
                printf("\n");
        }
    printf("\n\n");

    printf("MATRIZ D:\n\n");

    for(i = 0; i < 3; i++){                      //!< Aqui controle da linha.
     printf("\t |");                            //!< Aqui imprimir | que da impressão de [].
            for(j = 0; j < 3; j++){            //!< Aqui controle da coluna.
                printf(" %.1f + %.1fj |", d[i][j].real, d[i][j].imag);   //!< Aqui imprimir a matriz D.
                }
                printf("\n");
        }
        printf("\n\n");


    soma(c,d, mxt);  //!<  Aqui soma matriz c,d e mxt receberá o valor dessa soma.
    printf("RESULTADO C + D: \n\n");

     for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag); //!< Aqui imprimir a matriz resultante da soma da matrizes C e D.
                }
                printf("\n");
        }
        printf("\n\n");
return 0;
}



////////////////////////////////////////////TESTE/////////////////////////////////////////////////////////////



//////////////////////////////////////////TESTE///////////////////////////////////////////////////////////////

/************************************************
 *             TRANSPOSTA MATRIZ COMPLEXA
 ***********************************************/

int transposta(complexo a[3][3], complexo mxt[3][3]){

//! A função hospedará dois parâmetros; complexo a, mxt;
//! As matrizes a receberá o valore da matriz declarada;
//! mxt receberá a troca das linhas por colunas das matrizes declaradas.

    int i,j;
    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                mxt[i][j].real = a[j][i].real;
                mxt[i][j].imag = a[j][i].imag;
            }
        }
    return 0;
}

/////////////////////////////////////////////////
/////////////TESTE TRANSPOSTA///////////////////
///////////////////////////////////////////////

int teste_transposta(){ //!< função teste_transposta.

//! Preenchimento Da Matriz A.
//! Para inicializar a matriz 3x3 utilizamos uma estrutura de for aninhado.

    int i,j;
    printf("====== TESTE DA OPERAÇÃO TRANSPOSTA ======\n\n");
    printf("MATRIZ A:\n\n");
    for(i = 0; i < 3; i++){                                  //!< Aqui controle da linha.
    printf("\t |");                                         //!< Aqui imprimir | que da impressão de [].
            for(j = 0; j < 3; j++){                        //!< Aqui controle da coluna.
                printf(" %.1f |",a[i][j].real);           //!< Aqui imprimir a matriz A.
            }
            printf("\n");
        }
        printf("\n");
    printf("TRANSPOSTA A:\n\n");

    transposta(a, mxt);
    for(i = 0; i < 3; i++){                                    //!< Aqui controle da linha.
            for(j = 0; j < 3; j++){                           //!< Aqui controle da coluna.
                printf("\t %.1f ",mxt[i][j].real);           //!< Aqui imprimir a transposta da matriz A.
            }
            printf("\n");
        }
        printf("\n");

printf("MATRIZ B:\n\n");
    for(i = 0; i < 3; i++){                                                //!< Aqui controle da linha.
         printf("\t |");                                                  //!< Aqui imprimir | que da impressão de [].
            for(j = 0; j < 3; j++){                                      //!< Aqui controle da coluna.
                printf(" %.1f + %.1fj |",b[i][j].real,b[i][j].imag);     //!< Aqui imprimir a matriz B.
            }
            printf("\n");
        }
        printf("\n");
    printf("TRANSPOSTA B:\n\n");

    transposta(b, mxt);
    for(i = 0; i < 3; i++){                                                       //!< Aqui controle da linha.
            for(j = 0; j < 3; j++){                                              //!< Aqui controle da coluna.
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);      //!< Aqui imprimir a transposta da matriz B.
            }
            printf("\n");
        }
    printf("\n");
return 0;
}

/************************************************
 *           CONJUGADA MATRIZ COMPLEXA
 ***********************************************/

//! A função hospedará dois parâmetros; complexo a, mxt;
//! As matrizes a receberá o valore da matriz declarada;
//! mxt receberá cada elemento da matriz pelo respectivo complexo conjugado.

int conjugada(complexo a[3][3], complexo mxt[3][3]){

   int i,j;
   for(i = 0; i < 3; i++)
   {
       for(j = 0; j < 3; j++)
       {
           mxt[i][j].imag = a[i][j].imag*(-1);
           mxt[i][j].real = a[i][j].real;
       }
   }
   return 0;
}

/////////////////////////////////////////////////
/////////////TESTE CONJUGADA////////////////////
///////////////////////////////////////////////

int teste_conjugada(){

//! Preenchimento Da Matriz A.
//! Para inicializar a matriz 3x3 utilizamos uma estrutura de for aninhado.

    int i,j;
    printf("====== TESTA DA CONJUGADA ======\n\n");
    printf("MATRIZ A:\n\n");
    for(i = 0; i < 3; i++){                               //!< Aqui controle da linha.
    printf("\t |");                                      //!< Aqui imprimir | que da impressão de [].
            for(j = 0; j < 3; j++){                     //!< Aqui controle da coluna.
                printf(" %.1fj |",b[i][j].imag);       //!< Aqui imprimir a matriz A.
            }
            printf("\n");
        }
        printf("\n");
    printf("CONJUGADA A:\n\n");

    conjugada(b, mxt);

    for(i = 0; i < 3; i++){                                     //!< Aqui controle da coluna.
            for(j = 0; j < 3; j++){                            //!< Aqui controle da linha.
                printf("\t %.1fj", mxt[i][j].imag);           //!< Aqui imprimir a conjugada da matriz A.
            }
            printf("\n");
        }
        printf("\n");

printf("MATRIZ B:\n\n");
    for(i = 0; i < 3; i++){                                                    //!< Aqui controle da linha.
    printf("\t |");                                                           //!< Aqui imprimir | que da impressão de [].
            for(j = 0; j < 3; j++){                                          //!< Aqui controle da coluna.
                printf(" %.1f + %.1fj |",b[i][j].real,b[i][j].imag);        //!< Aqui imprimir a matriz B.
            }
            printf("\n");
        }
        printf("\n");
    printf("CONJUGADA B:\n\n");

    conjugada(b, mxt);

    for(i = 0; i < 3; i++){                                                      //!< Aqui controle da linha.
            for(j = 0; j < 3; j++){                                             //!< Aqui controle da coluna.
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);     //!< Aqui imprimir a conjugada da matriz B.
            }
            printf("\n");
        }
        printf("\n");
return 0;
}

/************************************************
 *                  HERMITIANA
 ***********************************************/

int hermitiana(complexo a[3][3], complexo mxt[3][3]){

//! A função hospedará dois parâmetros; complexo a e mxt;
//! As matrizes receberá os valores das matrizes declaradas;
//! o elemento na linha e coluna é igual ao conjugado complexo do elemento na j linha e i coluna;
//! mxt receberá sua própria transposta conjugada .

complexo i[3][3];

   transposta( a, i);
   conjugada( i, mxt);

return 0;

}

int teste_hermitiana(){
    int i,j;
    printf("====== TESTE DA HERMITIANA ======\n\n");
    printf("MATRIZ A:\n\n");

    for(i = 0; i < 3; i++){                              //!< Aqui controle da linha.
    printf("\t |");                                     //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                        //!< Aqui controle da coluna.
            printf(" %.1fj |", a[i][j].imag);         //!< Aqui imprimir a matriz A.
        }
        printf("\n");
}
    printf("\n");

    printf("HERMITIANA A:\n\n");

    hermitiana(a, mxt);

    for(i = 0; i < 3; i++){                             //!< Aqui controle da linha.
            for(j = 0; j < 3; j++){                    //!< Aqui controle da coluna.
                printf("\t %.1fj", mxt[i][j].imag);   //!< Aqui imprimir hermitiana A.
            }
            printf("\n");
        }
    printf("\n");

    printf("MATRIZ B:\n\n");
    for(i = 0; i < 3; i++){                                                       //!< Aqui controle da linha
    printf("\t |");                                                              //!< Aqui imprimir | que da impressão de [].
            for(j = 0; j < 3; j++){                                             //!< Aqui controle da coluna.
                    printf(" %.1f + %.1fj |",a[i][j].real,a[i][j].imag);       //!< Aqui imprimir matriz B
                }
            printf("\n");
        }
    printf("\n");
    printf("HERMITIANA B:\n\n");
    hermitiana(b, mxt);

    for(i = 0; i < 3; i++){                                                         //!< Aqui controle da linha.
            for(j = 0; j < 3; j++){                                                //!< Aqui controle da coluna.
                    printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);    //!< Aqui imprimir hermitiana B.
                }
                printf("\n");
        }
    printf("\n");

return 0;

}

/************************************************
 *             SUBTRAÇÃO DE MATRIZ COMPLEXA
 ***********************************************/

int subtracao(complexo a[3][3], complexo b[3][3], complexo mxt[3][3]){

//! A função hospedará três parâmetros; complexo a, b e mxt;
//! As matrizes a e b receberá os valores das matrizes declaradas;
//! mxt receberá os valores das subtrações das matrizes.

    int i,j;
    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                    mxt[i][j].real = a[i][j].real - b[i][j].real;
                    mxt[i][j].imag = a[i][j].imag - b[i][j].imag;
                }
        }
return 0;
}

/////////////////////////////////////////////////
/////////////TESTE SUBTRAÇÃO////////////////////
///////////////////////////////////////////////

int teste_subtracao(){

// Preenchimento Da Matriz A.
//! Para inicializar a matriz 3x3 utilizamos uma estrutura de for aninhado.

    int i,j;
    printf("====== TESTE DA OPERAÇÃO SUBTRAÇÃO ======\n\n");
    printf("MATRIZ A:\n\n");

    for(i = 0; i < 3; i++){                             //!< Aqui controle da linha.
    printf("\t |");                                    //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                       //!< Aqui controle da coluna.
                printf(" %.1f |",a[i][j].real);      //!< Aqui imprimir a matriz A.
            }
        printf("\n");
    }
    printf("\n");

    printf("MATRIZ B:\n\n");

    for(i = 0; i < 3; i++){                                //!< Aqui controle da linha.
    printf("\t |");                                       //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                          //!< Aqui controle da coluna.
                printf(" %.1f |",b[i][j].real);         //!< Aqui imprimir a matriz B.
            }
        printf("\n");
    }
    printf("\n");

    subtracao(a,b, mxt);
    printf("RESULTADO A - B:\n\n");

    for(i = 0; i < 3; i++){                                 //!< Aqui controle da linha.
        for(j = 0; j < 3; j++){                            //!< Aqui controle da coluna.
                printf("\t %.1f", mxt[i][j].real);        //!< Aqui imprimir a matriz resultante, da subtração da matrizes A e B.
            }
        printf("\n");
    }
    printf("\n");

    printf("MATRIZ C:\n\n");

    for(i = 0; i < 3; i++){                                                  //!< Aqui controle da linha.
     printf("\t |");                                                        //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                                            //!< Aqui controle da coluna.
                printf(" %.1f + %.1fj |",c[i][j].real,c[i][j].imag);      //!< Aqui imprimir a matriz C.
            }
        printf("\n");
    }
    printf("\n");

    printf("MATRIZ D:\n\n");

    for(i = 0; i < 3; i++){                                                   //!< Aqui controle da linha.
    printf("\t |");                                                          //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                                             //!< Aqui controle da coluna.
                printf(" %.1f + %.1fj |",d[i][j].real,d[i][j].imag);       //!< Aqui imprimir a matriz D.
            }
        printf("\n");
    }
    printf("\n");

    subtracao(c,d, mxt);

    printf("RESULTADO C - D:\n\n");

    for(i = 0; i < 3; i++){                                                            //!< Aqui controle da linha.
            for(j = 0 ; j < 3; j++){                                                  //!< Aqui controle da coluna.
                    printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);       //!< Aqui imprimir a matriz resultante da subtração da matrizes C e D.
            }
            printf("\n");
        }
        printf("\n");
return 0;

}

/************************************************
 *             PRODUTO ESCALAR
 ***********************************************/

//! A função hospedará três parâmetros; complexo a, b e mxt;
//! As matrizes a e b receberá os valores das matrizes declaradas;
//! mxt receberá os valores das multiplicação das matrizes.

int produto_escalar(complexo a[3][3], complexo b[3][3], complexo mxt[3][3]){

    int i,j;
    for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        mxt[i][j].real = mxt[i][j].real + (a[i][j].real) * (a[i][j].real);
        mxt[i][j].imag = mxt[i][j].imag + (b[i][j].imag) * (b[i][j].imag);
        }
    }
return 0;
}

/////////////////////////////////////////////////
/////////////TESTE PRODUTO ESCALAR//////////////
///////////////////////////////////////////////

int teste_produtoEscalar(){

//! Preenchimento Da Matriz A.
//! Para inicializar a matriz 3x3 utilizamos uma estrutura de for aninhado.

    int i,j;
    printf("====== TESTE DO PRODUTO ESCALAR ======\n\n");

    printf("MATRIZ A:\n\n");
    for(i = 0; i < 3; i++){                              //!< Aqui controle da linha.
    printf("\t |");                                     //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                        //!< Aqui controle da coluna.
                printf(" %.1f |", a[i][j].real);      //!< Aqui imprimir a matriz A.
            }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ B:\n\n");

    for(i = 0; i < 3; i++){                                 //!< Aqui controle da linha.
    printf("\t |");                                        //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                           //!< Aqui controle da coluna.
                printf(" %.1f |",b[i][j].real);          //!< Aqui imprimir a matriz B.
            }
        printf("\n");
    }
    printf("\n");

    produto_escalar(a,b, mxt);

    printf("PRODUTO ESCALAR A . B:\n\n");
    for(i = 0; i < 3; i++){                              //!< Aqui controle da linha.
        for(j = 0; j < 3; j++){                         //!< Aqui controle da coluna.
                printf("\t %.1f", mxt[i][j].real);     //!< Aqui imprimir a matriz resultante do produto da matrizes A e B.
            }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ C:\n\n");
    for(i = 0; i < 3; i++){                                                  //!< Aqui controle da linha.
    printf("\t |");                                                         //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                                            //!< Aqui controle da coluna.
                printf(" %.1f + %.1fj |",c[i][j].real,c[i][j].imag);      //!< Aqui imprimir a matriz C.
            }
        printf("\n");
    }
    printf("\n");
    printf("MATRIZ D:\n\n");
    for(i = 0; i < 3; i++){                                                    //!< Aqui controle da linha.
    printf("\t |");                                                           //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                                              //!< Aqui controle da coluna.
                printf(" %.1f + %.1fj |", d[i][j].real, d[i][j].imag);      //!< Aqui imprimir a matriz D.
            }
        printf("\n");
    }

    printf("\n");

    produto_escalar(c,d, mxt);

    printf("PRODUTO ESCALAR C . D:\n\n");
    for(i = 0; i < 3; i++){                                                        //!< Aqui controle da linha.
        for(j = 0; j < 3; j++){                                                   //!< Aqui controle da coluna.
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);       //!< Aqui imprimir a matriz resultante do produto da matrizes C e D.
            }
        printf("\n");
    }
    printf("\n");
return 0;
}

/************************************************
 *             PRODUTO MATRICIAL
 ***********************************************/

 //! A função hospedará três parâmetros; complexo a, b e mxt;
//! As matrizes a e b receberá os valores das matrizes declaradas;
//! mxt receberá os valores dos produtos das matrizes;
/*! OBS: Para multiplicar dois números complexos a + bj e c + dj, realizamos (ac – bd) + (ad + bc)j.
 */

int produto_matricial(complexo a[3][3], complexo b[3][3], complexo mxt[3][3]){


int i,j;
   for(i = 0 ; i < 3; i++){
        for(j = 0; j < 3; j++){

          mxt[i][j].real = ((a[i][j].real) * (b[i][j].real)-(a[i][j].imag)*(b[i][j].imag));
          mxt[i][j].imag = ((a[i][j].real) * (b[i][j].imag)+(b[i][j].real)*(a[i][j].imag));
    }
  }
return 0;
}


int teste_produtoMatricial(){
int i,j;
    printf("====== TESTE DO PRODUTO MATRICIAL ========\n\n");

    printf("MATRIZ A:\n\n");
    for(i = 0; i < 3; i++){                              //!< Aqui controle da linha.
    printf("\t |");                                     //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                        //!< Aqui controle da coluna.
                printf(" %.1f |", a[i][j].real);      //!< Aqui imprimir a matriz A.
            }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ B:\n\n");

    for(i = 0; i < 3; i++){                                 //!< Aqui controle da linha.
    printf("\t |");                                        //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                           //!< Aqui controle da coluna.
                printf(" %.1f |",b[i][j].real);          //!< Aqui imprimir a matriz B.
            }
        printf("\n");
    }
    printf("\n");

    produto_matricial(a,b, mxt);

    printf("PRODUTO MATRICIAL A X B:\n\n");
    for(i = 0; i < 3; i++){                                                      //!< Aqui controle da linha.
        for(j = 0; j < 3; j++){                                                 //!< Aqui controle da coluna.
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);     //!< Aqui imprimir a matriz resultante do produto da matrizes A e B.
            }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ C:\n\n");
    for(i = 0; i < 3; i++){                                                  //!< Aqui controle da linha.
    printf("\t |");                                                         //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                                            //!< Aqui controle da coluna.
                printf(" %.1f + %.1fj |",c[i][j].real,c[i][j].imag);      //!< Aqui imprimir a matriz C.
            }
        printf("\n");
    }
    printf("\n");
    printf("MATRIZ D:\n\n");
    for(i = 0; i < 3; i++){                                                    //!< Aqui controle da linha.
    printf("\t |");                                                           //!< Aqui imprimir | que da impressão de [].
        for(j = 0; j < 3; j++){                                              //!< Aqui controle da coluna.
                printf(" %.1f + %.1fj |", d[i][j].real, d[i][j].imag);      //!< Aqui imprimir a matriz D.
            }
        printf("\n");
    }

    printf("\n");

   produto_matricial(c,d, mxt);

    printf("PRODUTO MATRICIAL C X D:\n\n");
    for(i = 0; i < 3; i++){                                                        //!< Aqui controle da linha.
        for(j = 0; j < 3; j++){                                                   //!< Aqui controle da coluna.
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);       //!< Aqui imprimir a matriz resultante do produto da matrizes C e D.
            }
        printf("\n");
    }
    printf("\n\n");
return 0;
}


/************************************************
 *      DECOMPOSIÇÃO POR VALORES SINGULARES
 ***********************************************/

double teste_calc_svd(){
int i,j;

printf("************************************************\n");
printf("    DECOMPOSIÇÃO POR VALORES SINGULARES (SVD)   \n");
printf("************************************************\n\n");

//! Alocação e preenchimento da matriz 3x2 com valores aleatório
    gsl_matrix *matriz_3x2 = gsl_matrix_alloc(3, 2);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            gsl_matrix_set(matriz_3x2, i, j, (double)rand() / RAND_MAX); //!<Inicializar geração de números aleatórios
        }
    }

//! Alocação e preenchimento da matriz 4x4 com valores aleatórios
    gsl_matrix *matriz_4x4 = gsl_matrix_alloc(4, 4);
    for (i = 0; i < 4; i++) {
     for (j = 0; j < 4; j++) {
          gsl_matrix_set(matriz_4x4, i, j, (double)rand() / RAND_MAX); //!<Inicializar geração de números aleatórios
        }
    }

//! Alocação e preenchimento da matriz 6x5 com valores aleatórios
    gsl_matrix *matriz_6x5 = gsl_matrix_alloc(6, 5);
    for (i = 0; i < 6; i++) {
     for (j = 0; j < 5; j++) {
          gsl_matrix_set(matriz_6x5, i, j, (double)rand() / RAND_MAX); //!<Inicializar geração de números aleatórios
        }
    }

/**
//! Alocação e preenchimento da matriz 5x6 com valores aleatórios
    gsl_matrix *matriz_5x6 = gsl_matrix_alloc(5,6);
    for (i = 0; i < 5; i++) {
     for (j = 0; j < 6; j++) {
          gsl_matrix_set(matriz_5x6, i, j, (double)rand() / RAND_MAX); //!<Inicializar geração de números aleatórios
        }
    }
*/

//! Aqui imprimir a matriz_3x2.
    printf("====== TESTE DA MATRIZ_3x2 ========\n\n");

    printf("MATRIZ A:\n\n");
    for (int i = 0; i < 3; i++){
 //      printf("\t |");
        for (int j = 0; j < 2; j++){
            printf("\t %f", gsl_matrix_get(matriz_3x2, i, j));
        }
        printf("\n");
    }
printf("\n");

//! Aqui cálculo SVD para matriz_3x2
    gsl_matrix *U_3x2 = gsl_matrix_alloc(3, 2);
    gsl_vector *S_3x2 = gsl_vector_alloc(2);
    gsl_matrix *V_3x2 = gsl_matrix_alloc(2, 2);
    gsl_vector * work_3x2 = gsl_vector_alloc(2);
    gsl_linalg_SV_decomp(matriz_3x2, V_3x2, S_3x2, work_3x2);

//! Impressão das matrizes V, U e S para a matriz 3x2

//! Imprime a matriz V
  printf("MATRIZ V:\n");
    for(i=0; i<2; i++){
 //    printf("\t |");
       for(j=0; j<2; j++){
           printf("\t %f", gsl_matrix_get(V_3x2, i, j));
}
     printf("\n");
    }
printf("\n");

//! Imprime a matriz U
  printf("MATRIZ U:\n");
    for(i=0; i<3; i++){
       for(j=0; j<2; j++){
           printf("\t %f ", gsl_matrix_get(matriz_3x2, i, j));
}
     printf("\n");
    }
printf("\n");

//! Imprime a vetor S
    printf("VETOR S:\n");
    for (i = 0; i < 2; i++)
    {
        printf("\t %f ", gsl_vector_get(S_3x2, i));
    }
printf("\n\n");


//! Aqui imprimir a matriz_4x4
    printf("====== TESTE DA MATRIZ_4x4 ========\n\n");
    printf("MATRIZ A:\n\n");
    for (int i = 0; i < 4; i++){
 //      printf("\t |");
        for (int j = 0; j < 4; j++){
            printf("\t %f", gsl_matrix_get(matriz_4x4, i, j));
        }
        printf("\n");
    }
    printf("\n");

//! Aqui cálculo SVD para matriz_4x4
    gsl_matrix *U_4x4 = gsl_matrix_alloc(4, 4);
    gsl_vector *S_4x4 = gsl_vector_alloc(4);
    gsl_matrix *V_4x4 = gsl_matrix_alloc(4, 4);
    gsl_vector * work_4x4 = gsl_vector_alloc(4);
    gsl_linalg_SV_decomp(matriz_4x4, V_4x4, S_4x4, work_4x4);


//! Impressão das matrizes V, U e S para a matriz 4x4
//! Imprime a matriz V
  printf("MATRIZ V:\n");
    for(i=0; i<4; i++){
 //    printf("\t |");
       for(j=0; j<4; j++){
           printf("\t %f", gsl_matrix_get(V_4x4, i, j));
}
     printf("\n");
    }
printf("\n");

//! Imprime a matriz U
  printf("MATRIZ U:\n");
    for(i=0; i<4; i++){
       for(j=0; j<4; j++){
           printf("\t %f ", gsl_matrix_get(matriz_4x4, i, j));
}
     printf("\n");
    }
printf("\n");

//! Imprime a vetor S
    printf("VETOR S:\n");
    for (i = 0; i < 4; i++)
    {
        printf("\t %f ", gsl_vector_get(S_4x4, i));
    }
printf("\n\n");


//! Aqui imprimir a matriz_6x5

    printf("====== TESTE DA MATRIZ_6x5 ========\n\n");
    printf("MATRIZ A:\n\n");
    for (int i = 0; i < 6; i++){
 //      printf("\t |");
        for (int j = 0; j < 5; j++){
            printf("\t %f", gsl_matrix_get(matriz_6x5, i, j));
        }
        printf("\n");
    }
    printf("\n");

//! Aqui cálculo SVD para matriz_6x5
    gsl_matrix *U_6x5 = gsl_matrix_alloc(6,5);
    gsl_vector *S_6x5 = gsl_vector_alloc(5);
    gsl_matrix *V_6x5 = gsl_matrix_alloc(5,5);
    gsl_vector * work_6x5 = gsl_vector_alloc(5);
    gsl_linalg_SV_decomp(matriz_6x5, V_6x5, S_6x5, work_6x5);


//! Impressão das matrizes V, U e S para a matriz 6x5
//! Imprime a matriz V
  printf("MATRIZ V:\n");
    for(i=0; i<5; i++){
 //    printf("\t |");
       for(j=0; j<5; j++){
           printf("\t %f", gsl_matrix_get(V_6x5, i, j));
}
     printf("\n");
    }
printf("\n");

//! Imprime a matriz U
  printf("MATRIZ U:\n");
    for(i=0; i<6; i++){
       for(j=0; j<5; j++){
           printf("\t %f ", gsl_matrix_get(matriz_6x5, i, j));
}
     printf("\n");
    }
printf("\n");

//! Imprime a vetor S
    printf("VETOR S:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\t %f ", gsl_vector_get(S_6x5, i));
    }
printf("\n\n");

/**

//! Aqui imprimir a matriz_5x6

    printf("====== TESTE DA MATRIZ_5x6 ========\n\n");
    printf("MATRIZ A:\n\n");
    for (int i = 0; i < 5; i++){
 //      printf("\t |");
        for (int j = 0; j < 6; j++){
            printf("\t %f", gsl_matrix_get(matriz_5x6, i, j));
        }
        printf("\n");
    }
    printf("\n");

//! Aqui cálculo SVD para matriz_5x6
    gsl_matrix *U_5x6 = gsl_matrix_alloc(5,6);
    gsl_vector *S_5x6 = gsl_vector_alloc(6);
    gsl_matrix *V_5x6 = gsl_matrix_alloc(6,6);
    gsl_vector * work_5x6 = gsl_vector_alloc(6);
    gsl_linalg_SV_decomp(matriz_5x6, V_5x6, S_5x6, work_5x6);


//! Impressão das matrizes V, U e S para a matriz 5x6
//! Imprime a matriz V
  printf("MATRIZ V:\n");
    for(i=0; i<6; i++){
 //    printf("\t |");
       for(j=0; j<6; j++){
           printf("\t %f", gsl_matrix_get(V_5x6, i, j));
}
     printf("\n");
    }
printf("\n");

//! Imprime a matriz U
  printf("MATRIZ U:\n");
    for(i=0; i<5; i++){
       for(j=0; j<6; j++){
           printf("\t %f ", gsl_matrix_get(matriz_5x6, i, j));
}
     printf("\n");
    }
printf("\n");

//! Imprime a vetor S
    printf("VETOR S:\n");
    for (i = 0; i < 6; i++)
    {
        printf("\t %f ", gsl_vector_get(S_5x6, i));
    }
printf("\n\n");

*/

//! Liberação de memória
    gsl_matrix_free(matriz_3x2);
    gsl_matrix_free(V_3x2);
    gsl_matrix_free(U_3x2);
    gsl_vector_free(S_3x2);
    gsl_matrix_free(matriz_4x4);
    gsl_matrix_free(V_4x4);
    gsl_matrix_free(U_4x4);
    gsl_vector_free(S_4x4);
    gsl_matrix_free(matriz_6x5);
    gsl_matrix_free(V_6x5);
    gsl_matrix_free(U_6x5);
    gsl_vector_free(S_6x5);
//  gsl_matrix_free(matriz_5x6);
//  gsl_matrix_free(V_5x6);
//  gsl_matrix_free(U_5x6);
//  gsl_vector_free(S_5x6);

return 0;
}




