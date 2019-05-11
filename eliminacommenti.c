/*

# caratteri

# Programmi di Laboratorio di Programmazione in Linguaggio "C". Alunno: Bucchianico Enrico Ruggiero, 4^Finf.


- Programma "eliminacommenti.c": Programma che elimina i commenti da un file C.

*/

#include <stdio.h>

int main()
{

	/*

		STATI:
		1)	"COD"=Codice "C";
		2)	"S"=Slash;
		3)	"COMM"=Inizio di un commento;
		4)	"AS"=Asterisco in un commento, se seguito da slash, lo stato torna a "COD";
		5)	"ST"=Stringa;
		6)	"A"=Apice.

		TABELLA STATI:
		Stato:		Input:		Output:		Nuovo Stato:
		COD		c=='/'				S
		COD		c!='/'		c
		COD		c=='"'		c		ST
		COD		c=='''		c		A
		ST		c=='\'		c		BS
		ST		c=='"'		c		COD
		ST		c!='"'		c
		A		c=='\'		c
		A		c=='''		c		
		S		c=='*'				COMM
		S		c!='*'		'/'+c		COD
		COMM		c=='*'				AS
		COMM		c!='*'
		AS		c=='/'				COD
		AS		c!='/'				COMM
		

	*/

	enum Stato{COD,S,COMM,AS,ST,BS,A};

	int stato=COD,c;

	while((c=getchar())!=EOF)
	{

		if(stato==COD)
		{
      
			if(c=='\"')
			{

				putchar(c);
				stato=ST;

			}
			else if(c=='\'')
			{

				putchar(c);
				stato=A;

			}
			else if(c=='/')
			{

				stato=S;

			}
			else
			{

				putchar(c);

			}

		}
		else if(stato==ST)
		{

			putchar(c);
			if (c=='\\')
			{

				c=getchar();
				putchar(c);

			}
			else if(c=='\"')
			{

				stato=COD;

			}

		}
		else if(stato==A)
		{

			putchar(c);

			if(c=='\\')
			{

				c=getchar();
				putchar(c);

			}
			else if(c == '\'')
			{

				stato=COD;

			}
		}
		else if(stato==S)
		{

		if (c!='*')
		{

			putchar('/');
			putchar(c);
			stato=COD;

		}
		else
		{

			stato=COMM;

		}

		}
		else if(stato==COMM)
		{
      
			if(c=='*')
			{

				stato=AS;

			}

		}
		else if(stato==AS)
		{

			if (c!='/')
			{

				stato=COMM;

			}
			else
			{

				stato=COD;

			}

		}

	}

	putchar('\n');

	return 0;
}