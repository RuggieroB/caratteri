/*

# caratteri

# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "contacar.c": Programma che conteggia il il numero di caratteri forniti allo standard input.

*/

#include <stdio.h>

int main () {

	int c,num_c=0;

	while ( (c=getchar())!=EOF ) {

		num_c++;

	}

	printf("Numero di caratteri:\t%d\n",num_c);

	return 0;

}