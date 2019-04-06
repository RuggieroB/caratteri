/*

# caratteri

# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "contavocali.c": Programma che conteggia il il numero di vocali fornite allo standard input.

*/

#include <stdio.h>

int main () {

	int c,num_voc=0;

	while ( (c=getchar())!=EOF ) {

		switch ( c ) {

			case 'a':

			case 'e':

			case 'i':

			case 'o':

			case 'u':
				
			case 'A':

			case 'E':

			case 'I':

			case 'O':

			case 'U':
				
				num_voc++;
				break;
		
			default:

				/* Nothing to do */
				break;

		}

	}

	printf("Numero di vocali:\t%d\n",num_voc);

	return 0;

}