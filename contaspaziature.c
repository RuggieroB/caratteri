/*

# caratteri

# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "contaspaziature.c": Programma che conteggia il il numero di caratteri di tabulazione, spazi e newline forniti allo standard input.

*/

#include <stdio.h>

int main () {

	int c,num_tab=0,num_s=0,num_nl=0;

	while ( (c=getchar())!=EOF ) {

		switch ( c ) {
			
			case '\t':
				num_tab++;
				break;

			case ' ':
				num_s++;
				break;

			case '\n':

				num_nl++;
				break;

			default:

				/* Nothing to do */
				break;
		
		}

	}

	printf("Numero di tabulazioni:\t%d\n",num_tab);
	printf("Numero di spazi:\t%d\n",num_s);
	printf("Numero di newline:\t%d\n",num_nl);

	return 0;

}