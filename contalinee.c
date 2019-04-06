/*

# caratteri

# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "contalinee.c": Programma che conteggia il il numero di linee fornite allo standard input.

*/

#include <stdio.h>

int main () {

	int c,num_linee=0;

	while ( (c=getchar())!=EOF ) {

		if ( c=='\n')	num_linee++;	/* No 'else' for this 'if' */

	}

	printf("Numero di linee:\t%d\n",num_linee);

	return 0;

}