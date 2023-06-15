#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <gsl/gsl_linalg.h>
#include "matrizes.h"

int main(){
srand(time(NULL));

print_name();
teste_transposta();
teste_conjugada();
teste_hermitiana();
teste_soma();
teste_subtracao();
teste_produtoEscalar();
teste_produtoMatricial();
/**
teste_calc_svd(3, 2);
teste_calc_svd(4, 4);
teste_calc_svd(6, 5);
teste_calc_svd(5, 6);
*/
teste_calc_svd();

return 0;
}
