
/*
# caratteri
# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "contaparole.c": Programma che conta i caratteri, le righe e le parole di un testo fornito allo standard input. Si ipotizza che nel testo in ingresso non siano presenti spazi multipli.
*/

#include <stdio.h>

int main()
{
	
	/*
		STATI:
		1)	"INIZ"=Carattere iniziale;
		2)	"INT"=Interno alla parola;
		3)	"EST"=esterno alla parola.
		TABELLA STATI:
		Stato:		Input:		Output:		Nuovo Stato:
		INIZ		c==' ' or
				c=='\n' or
				c=='\t'				EST
		INIZ		c==' ' and
				c=='\n' and
				c=='\t'		p++	INT
		INT		c==' ' or
				c=='\n' or
				c=='\t'				EST
		INT		c==' ' and
				c=='\n' and
				c=='\t'
		EST		c==' ' and
				c=='\n' and
				c=='\t'		p++
	*/

	enum Stato{INIZ,INT,EST};

	int stato=INIZ,c,car=0,r=0,p=0;

	while ((c=getchar())!=EOF)
	{

		car++;
	
		if(c=='\n')
		{
			
			r++;

		}

		if(stato==INIZ)
		{
	
			if (c==' '||c=='\n'||c=='\t')
			{

        			stato=EST;

      			}
			else
			{

        			stato=INT;
        			p++;

      			}

		}
		else if(stato==INT)
		{

			if (c==' '||c=='\n'||c=='\t')
			{

				stato=EST;

			}
   
		}
		else if(stato==EST)
		{

			if (c==' '||c=='\n'||c=='\t')
			{

				;

			}
			else
			{

				stato=INT;
				p++;
			}
		}
	}

	printf("Numero di caratteri letti:\t%d\n",car);
	printf("Numero di righe lette:\t%d\n",r);
	printf("Numero di parole lette:\t%d\n",p);
	
	putchar('\n');

	return 0;
}