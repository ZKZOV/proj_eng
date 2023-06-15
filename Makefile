# Nome do arquivo de saída
OUTPUT := meu_programa

# Diretório de inclusão do GSL
GSL_INCLUDE := /usr/include

# Diretório das bibliotecas do GSL
GSL_LIB := /usr/lib/x86_64-linux-gnu

# Opções de compilação
CC := gcc
CFLAGS := -Wall -Wextra -I usr/include/
LDFLAGS := -L/usr/lib/x86_64-linux-gnu/ -lgsl
LDLIBS := gcc main.c matrizes.c -o a.out -lgsl -lgslcblas -lm

# Regra de compilação
$(OUTPUT): meu_programa.c
    $(CC) $(CFLAGS) $(LDFLAGS) -o $@ $< $(LDLIBS)

# Regra de limpeza
clean:
    rm -f $(OUTPUT)

clean:
	rm -f $(TARGET)

doc: 
	@doxygen 
	@open doxygen .Doxyfile




