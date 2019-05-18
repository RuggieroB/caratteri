/* ELIMINA COMMENTI */
#include <stdio.h>
int main(){

	int a,b,s=0;

	char C={"Questa stringa contiene un commento\n"},st;
	"/* non sono un vero commento ... */\n"
	"solo a scopo dimostrativo.\n\n"
	"E anche un carattere 'c'!"
	"E una \"stringa\"";

	/*commento"*"*/
	/*TEST */
	/*ELIMINA"*"COMMENTI\*/

	printf("Inserire 2 valori interi:\t"); /*Input di due numeri interi*/
	scanf("%5d%5d",&a,&b); /*COMMENTO: bla,bla,bla,bla,bla.........*/
	s=a+b;/*Somma dei valori*/
	printf("\nSomma:\t%d\n",s); /*Stampa dell'output*/

	putchar('\n'); "/* NON ELIMINARE IL \"putchar('\n');\" */\n";

	return 0;
}