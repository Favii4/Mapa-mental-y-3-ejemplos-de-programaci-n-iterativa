#include <stdio.h>
#include <conio.h>
int main ()
{
    int numero, sum_dig=0;
    printf("Inserte un numero de 3 digitos: "); scanf("%d",&numero);
    if (numero>=100)
    {
       int num=numero; //salvamos en num, la variable numero
       while (numero!=0)
       {
         sum_dig=sum_dig+(numero%10); //para sacar el ultimo digito de numero
         numero=numero/10; //elimina el ultimo digito de numero
       }
       printf("La suma de los digitos de %d es : %d",num, sum_dig);
    }
    else
    printf("\a ERROR: El digito no tiene 3 digitos");
    getch();
}
