/*

# caratteri

# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "copia.c": Utilizzo del programma "eco" facendo uso della redirezione dell'input e dell'output.

*/

#include <stdio.h>

int main () {

	int c;

	while ( (c=getchar())!=EOF ) {

		putchar(c);

	}

	return 0;

}