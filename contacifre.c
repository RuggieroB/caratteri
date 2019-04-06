/*

# caratteri

# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "contacifre.c": Programma che conteggia i caratteri di spaziatura (caratteri di tabulazione, spazi e newline), le cifre (separatamente) e gli altri caratteri 
	      forniti allo standard input.

*/

#include <stdio.h>

int main () {

	int c,num_spazi=0,i,num_altri_car=0;
	
	int num_cifre[10];
	
	for ( i=0; i<10; i++ ) {

		num_cifre[i]=0;

	}

	while ( (c=getchar())!=EOF ) {

		if ( c=='\t' || c==' ' || c=='\n' ) {
		
			num_spazi++;

		}

		else if ( c>='0' && c<='9' ) {

			num_cifre[c-'0']++;

		}

		else {

			num_altri_car++;

		}

	}

	printf("Numero di caratteri di spaziatura (caratteri di tabulazione, spazi e newline):\t%d\n",num_spazi);
	putchar('\n');
	
	printf("Numero di cifre:\n");
	for ( i=0; i<10; i++ ) {

		printf("%d)\t%d\n",i,num_cifre[i]);

	}
	putchar('\n');

	printf("Numero di caratteri di altri caratteri:\t%d\n",num_altri_car);	
	
	return 0;

}