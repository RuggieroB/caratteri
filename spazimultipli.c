/*

# caratteri

# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "spazimultipli.c": Programma che elimina gli spazi multipli da un testo dato in input.

*/

#include <stdio.h>

int main () {

	/*

		STATI:
		1)	"NORM"=stato normale;
		2)	"SPACE"=spazio incontrato.

		TABELLA STATI:
		Stato:      Input:    Output:     Nuovo Stato
		NORM        c!=' '      c              -
		NORM        c==' '      c             SPACE
		SPACE       c!=' '      c             NORM
		SPACE       c==' '      -              -

	*/

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