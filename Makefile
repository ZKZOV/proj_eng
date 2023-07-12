# Nome do arquivo Makefile

OUTPUT := programa

# Compilador
CC = gcc

# Flags do compilador
CFLAGS = -Wall -Wextra -std=c11

# Diretório de inclusão da biblioteca GSL
GSL_INCLUDE = -I/usr/include/

# Diretório das bibliotecas da GSL
GSL_LIB = -L/usr/lib/x86_64-linux-gnu/ -lgsl

# Nome do executável
TARGET = programa

# Arquivos fonte
SRCS = main.c matrizes.c

# Objetos gerados
OBJS = $(SRCS:.c=.o)

# Regra de compilação
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) -L$(GSL_LIB) -lgsl -lgslcblas -lm

# Regra para compilar os arquivos fonte
%.o: %.c
	$(CC) $(CFLAGS) -I$(GSL_INCLUDE) -c $< -o $@

doc: 
	@doxygen 
	@open doxygen .Doxyfile

# Regra para limpar os arquivos objeto e o executável
clean:
	rm -f $(OBJS) $(TARGET)
