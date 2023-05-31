/*════════════════════════════•°• CLIENTE •°•════════════════════════════*/

/*************************************************************************************************************
 * Neste arquivo (chamado de cliente) esta incluído o arquivo matrizes.h que tem a função principal. 
 * Aqui deste arquivo podemos chamar as funções que está definida no aquivo da interface (matrizes.h).
 *************************************************************************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include "matrizes.h"

int main(){

print_name();               //!< uma função print_name.
teste_transposta();         //!< uma função teste_transposta.
teste_conjugada();          //!< uma função teste_conjugada.
teste_hermitiana();         //!< uma função teste_hermitiana.
teste_soma();               //!< uma função teste_soma.
teste_subtracao();          //!< uma função teste_subtracao.
teste_produtoEscalar();     //!< uma função teste_produtoEscalar.
teste_produtoMatricial();   //!< uma função teste_produtoMatricial.

return 0;
}
