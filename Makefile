all: aplicacao

aplicacao: maio.o matrizes.o
	@echo "Compilando um novo executavel matrizes.exe..."
	gcc -o aplicacao main.o matrizes.o

teste: matrizes.c matrizes.h	
	@echo "Compilando a biblioteca matrizes"
	gcc -o matrizes.o matrizes.c -c -Wall -Werror -pedantic

maio.o: main.c matrizes.h 
	@echo "Compilando a main.c"
	gcc -o main.o main.c -c -W -Wall -Werror -pedantic

doc: 
	@doxygen 
	@open doxygen .Doxyfile

clean:
	rm -rf *.o *~aplicacao


