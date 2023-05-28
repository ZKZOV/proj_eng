/*════════════════════════════•°• IMPLEMETAÇÃO •°•════════════════════════════*/

/*************************************************************************************************************
 * Aqui temos a importação das bibliotecas e a inclusão do arquivo matrizes.h.
   Nesse arquivo temos todas as declaração das assinaturas das funções que iremos utilizar aqui nesse arquivo.
 *************************************************************************************************************
*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
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

complexo a[3][3] = { {{1,2},{3,2},{5,8}},
                     {{3,9},{2,3},{1,4}},
                     {{3,2},{7,8},{3,3}} };

complexo b[3][3] = { {{2,2},{1,1},{3,2}},
                     {{2,4},{2,3},{1,3}},
                     {{1,2},{1,1},{2,2}} };

complexo c[3][3] = { {{4,1},{2,4},{6,2}},
                     {{3,9},{1,2},{3,9}},
                     {{9,3},{6,3},{3,3}} };


complexo d[3][3] = { {{1,2},{3,2},{5,8}},
                     {{3,9},{2,3},{1,4}},
                     {{3,2},{7,8},{3,3}} };

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
    printf("====== TESTE DA OPERAÇÃO SOMA ========\n\n");
    printf("MATRIZ A:\n\n");

// Preenchimento Da Matriz A.
//! Para inicializar a matriz 3x3 utilizamos uma estrutura de for aninhado.
/*! OBS: A logica do código da estrutura for aninhado para inicializar a matriz servira como modelo para as outras estruturas do for aqui implementado.
 */

     for(i = 0;i < 3; i++){                                //!< Aqui controle da linha.
     printf("\t |");								      //!< Aqui imprimir | que da impressão de [].
            for(j = 0; j < 3; j++){					     //!< Aqui controle da coluna.
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
                    printf(" \t %.1f", mxt[i][j].real);          //!< Aqui imprimir a matriz A e B, parte real.
                }
                printf("\n");
        }
        printf("\n\n");

    printf("MATRIZ C:\n\n");                              

    for(i = 0; i < 3; i++){                        //!< Aqui controle da linha.
        printf("\t |");							  //!< Aqui imprimir | que da impressão de [].
            for(j = 0; j < 3; j++){              //!< Aqui controle da coluna.
                printf(" %.1f + %.1fj |",c[i][j].real,c[i][j].imag);    //!< Aqui imprimir a matriz C, parte real e imaginária.
                }
                printf("\n");
        }
    printf("\n\n");

    printf("MATRIZ D:\n\n");

    for(i = 0; i < 3; i++){                      //!< Aqui controle da linha.    
     printf("\t |");							//!< Aqui imprimir | que da impressão de [].
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
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag); //!< Aqui imprimia a soma dos valores das matrizes C e D, parte real e imaginária.
                }
                printf("\n");
        }
        printf("\n\n");
return 0;
}


/* TRANSPOSTA MATRIZ COMPLEXA */


int transposta(complexo a[3][3], complexo mxt[3][3]){
    int i,j;
    for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++)
            {
                mxt[i][j].real = a[j][i].real;
                mxt[i][j].imag = a[j][i].imag;
            }
        }
    return 0;
}


int teste_transposta(){
    int i,j;
    printf("====== TESTE DA OPERAÇÃO TRANSPOSTA ======\n\n");
    printf("MATRIZ A:\n\n");
    for(i = 0; i < 3; i++){
    printf("\t |");
            for(j = 0; j < 3; j++){
                printf(" %.1f |",a[i][j].real);
            }
            printf("\n");
        }
        printf("\n");
    printf("TRANSPOSTA A:\n\n");

    transposta(a, mxt);
    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                printf("\t %.1f ",mxt[i][j].real);
            }
            printf("\n");
        }
        printf("\n");

printf("MATRIZ B:\n\n");
    for(i = 0; i < 3; i++){
         printf("\t |");
            for(j = 0; j < 3; j++){
                printf(" %.1f + %.1fj |",b[i][j].real,b[i][j].imag);
            }
            printf("\n");
        }
        printf("\n");
    printf("TRANSPOSTA B:\n\n");

    transposta(b, mxt);
    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);
            }
            printf("\n");
        }
    printf("\n");
}

/* CONJUGADA MATRIZ COMPLEXA */

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


int teste_conjugada(){

    int i,j;
    printf("====== TESTA DA CONJUGADA ========\n\n");
    printf("MATRIZ A:\n\n");
    for(i = 0; i < 3; i++){
    printf("\t |");
            for(j = 0; j < 3; j++){
                printf(" %.1fj |",b[i][j].imag);
            }
            printf("\n");
        }
        printf("\n");
    printf("CONJUGADA A:\n\n");

    conjugada(b, mxt);

    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                printf("\t %.1fj", mxt[i][j].imag);
            }
            printf("\n");
        }
        printf("\n");

printf("MATRIZ B:\n\n");
    for(i = 0; i < 3; i++){
    printf("\t |");
            for(j = 0; j < 3; j++)
            {
                printf(" %.1f + %.1fj |",b[i][j].real,b[i][j].imag);
            }
            printf("\n");
        }
        printf("\n");
    printf("CONJUGADA B:\n\n");

    conjugada(b, mxt);

    for(i = 0; i < 3; i++)
        {
            for(j = 0; j < 3; j++){
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);
            }
            printf("\n");
        }
        printf("\n");

}


/* HERMITIANA MATRIZ COMPLEXA */
int hermitiana(complexo a[][3], complexo mxt[][3]){
complexo i[3][3];

   transposta( a, i);
   conjugada( i, mxt);

return 0;

}
int teste_hermitiana(){

    int i,j;
    printf("====== TESTE DA HERMITIANA ========\n\n");
    printf("MATRIZ A:\n\n");

    for(i = 0; i < 3; i++){
    printf("\t |");
        for(j = 0; j < 3; j++){
            printf(" %.1fj |", a[i][j].imag);
        }
        printf("\n");
}
    printf("\n");

    printf("HERMITIANA A:\n\n");

    hermitiana(a, mxt);

    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++)
            {
                printf("\t %.1fj", mxt[i][j].imag);
            }
            printf("\n");
        }
    printf("\n");

    printf("MATRIZ B:\n\n");
    for(i = 0; i < 3; i++){
    printf("\t |");
            for(j = 0; j < 3; j++){
                    printf(" %.1f + %.1fj |",a[i][j].real,a[i][j].imag);
                }
            printf("\n");
        }
    printf("\n");
    printf("HERMITIANA B:\n\n");

    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                    printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);
                }
                printf("\n");
        }
    printf("\n");

return 0;

}



/* SUBTRAÇÃO MATRIZ COMPLEXA */

int subtracao(complexo a[3][3], complexo b[3][3], complexo mxt[3][3])
{
    int i,j;
    for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                    mxt[i][j].real = a[i][j].real - b[i][j].real;
                    mxt[i][j].imag = a[i][j].imag - b[i][j].imag;
                }
        }
return 0;
}

int teste_subtracao(){

    int i,j;
    printf("====== TESTE DA OPERAÇÃO SUBTRAÇÃO ========\n\n");
    printf("MATRIZ A:\n\n");

    for(i = 0; i < 3; i++){
    printf("\t |");
        for(j = 0; j < 3; j++){
                printf(" %.1f |",a[i][j].real);
            }
        printf("\n");
    }
    printf("\n");

    printf("MATRIZ B:\n\n");

    for(i = 0; i < 3; i++){
    printf("\t |");
        for(j = 0; j < 3; j++){
                printf(" %.1f |",b[i][j].real);
            }
        printf("\n");
    }
    printf("\n");

    subtracao(a,b, mxt);
    printf("RESULTADO A - B:\n\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            {
                printf("\t %.1f", mxt[i][j].real);
            }
        printf("\n");
    }
    printf("\n");

    printf("MATRIZ C:\n\n");

    for(i = 0; i < 3; i++){
     printf("\t |");
        for(j = 0; j < 3; j++){
                printf(" %.1f + %.1fj |",c[i][j].real,c[i][j].imag);
            }
        printf("\n");
    }
    printf("\n");

    printf("MATRIZ D:\n\n");

    for(i = 0; i < 3; i++){
    printf("\t |");
        for(j = 0; j < 3; j++){
                printf(" %.1f + %.1fj |",d[i][j].real,d[i][j].imag);
            }
        printf("\n");
    }
    printf("\n");

    subtracao(c,d, mxt);

    printf("RESULTADO C - D:\n\n");

    for(i = 0; i < 3; i++){
            for(j = 0 ; j < 3; j++){
                    printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);
            }
            printf("\n");
        }
        printf("\n");
return 0;
}

/* PRODUTO ESCALAR */
int produto_escalar(complexo a[3][3], complexo b[3][3], complexo mxt[3][3]){
    int i,j;
    for(i = 0; i < 3; i++)
    {
    for(j = 0; j < 3; j++)
        {
        mxt[i][j].real = ((a[i][j].real) * (b[i][j].real)-(a[i][j].imag)*(b[i][j].imag));
        mxt[i][j].imag = ((a[i][j].real) * (b[i][j].imag)+(b[i][j].real)*(a[i][j].imag));
        }
    }
return 0;
}

// Example
// -------

int teste_produtoEscalar(){
    int i,j;

    printf("====== TESTE DO PRODUTO ESCALAR ========\n\n");

    printf("MATRIZ A:\n\n");
    for(i = 0; i < 3; i++){
    printf("\t |");
        for(j = 0; j < 3; j++){
                printf(" %.1f |", a[i][j].real);
            }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ B:\n\n");

    for(i = 0; i < 3; i++){
    printf("\t |");
        for(j = 0; j < 3; j++){
                printf(" %.1f |",b[i][j].real);
            }
        printf("\n");
    }
    printf("\n");

    produto_escalar(a,b, mxt);

    printf("PRODUTO A e B:\n\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);
            }
        printf("\n");
    }

    printf("\n");

    printf("MATRIZ C:\n\n");
    for(i = 0; i < 3; i++){
    printf("\t |");
        for(j = 0; j < 3; j++){
                printf(" %.1f + %.1fj |",c[i][j].real,c[i][j].imag);
            }
        printf("\n");
    }
    printf("\n");
    printf("MATRIZ D:\n\n");
    for(i = 0; i < 3; i++){
    printf("\t |");
        for(j = 0; j < 3; j++){
                printf(" %.1f + %.1fj |", d[i][j].real, d[i][j].imag);
            }
        printf("\n");
    }

    printf("\n");

    produto_escalar(c,d, mxt);
    printf("PRODUTO ESCALAR C . D:\n\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);
            }
        printf("\n");
    }
    printf("\n");
return 0;
}

// PRODUTO MATRIAL //////////////////////////////////////////////////////////
int produto_matricial(complexo a[3][3], complexo b[3][3], complexo mxt[3][3]){
int i,j;
 for(i = 0 ; i < 3; i++){
        for(j = 0; j < 3; j++){
        mxt[i][j].real = ((a[i][j].real) * (b[i][j].real)+(a[i][j].imag)*(b[i][j].imag));
        mxt[i][j].imag = ((a[i][j].real) * (b[i][j].imag)+(b[i][j].real)*(a[i][j].imag));
    }
  }
return 0;
}


int teste_produtoMatricial(){
int i,j;
    printf("====== TESTE DO PRODUTO MATRICIAL ========\n\n");

    printf("MATRIX A:\n\n");

    for(i = 0; i < 3; i++){
    printf("\t |");
    for(j = 0; j < 3; j++){
    printf(" %.1f |", a[i][j].real);
            }
        printf("\n");
    }
    printf("\n");

    printf("MATRIZ B:\n\n");
    for(i = 0; i < 3; i++){
    printf("\t |");
        for(j = 0; j < 3; j++){
                printf(" %.1f |", b[i][j].real);
            }
        printf("\n");
    }
    printf("\n");
    produto_matricial(a,b,mxt);

    printf("PRODUTO A e B:\n\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);
            }
        printf("\n");
    }
     printf("\n");
    printf("MATRIZ C:\n\n");
    for(i = 0; i < 3; i++){
            printf("\t |");
    for(j = 0; j < 3; j++){
            printf(" %.1f + %.1fj |",c[i][j].real,c[i][j].imag);
            }
        printf("\n");
    }

    printf("\n");
    printf("MATRIZ D:\n\n");
    for(i = 0; i < 3; i++){
    printf("\t |");
        for(j = 0; j < 3; j++){
                printf(" %.1f + %.1fj |",d[i][j].real,d[i][j].imag);
            }
        printf("\n");
    }
    printf("\n");

    produto_matricial(c,d, mxt);

    printf("PRODUTO MATRICIAL C X D:\n\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
                printf("\t %.1f + %.1fj", mxt[i][j].real, mxt[i][j].imag);
          }
        printf("\n");
    }
    printf("\n");
return 0;
}
