/*

# caratteri

# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "spazimultipli.c": Programma che elimina gli spazi multipli da un testo dato in input.

*/

#include <stdio.h>

int main () {

	enum Stato{NORM,SPACE};

	int stato=NORM,c;

	while ( (c=getchar())!=EOF )
	{
		if (stato==NORM)
		{
			if (c==' ')
			{
				stato = SPACE;
			}
			putchar(c);
		}
		else if (stato==SPACE)
		{
			if (c != ' ')
			{
				putchar(c);
				stato = NORM;
			}
		}
	}
	
	putchar('\n');

	return 0;
}