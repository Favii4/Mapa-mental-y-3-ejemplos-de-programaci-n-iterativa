#include<stdio.h>
#include<conio.h>
int main()
{
 int a, b, c, d, e, f;
 printf("Inserte num.1: "); scanf("%d",&a);
 printf("Inserte num.2: "); scanf("%d",&b);
 printf("Inserte num.3: "); scanf("%d",&c);
 printf("Inserte num.4: "); scanf("%d",&d);
 printf("Inserte num.5: "); scanf("%d",&e);
 printf("Inserte num.6: "); scanf("%d",&f);
 int menor=a;
 if(b<menor) menor=b;
 if(c<menor) menor=c;
 if(d<menor) menor=d;
 if(e<menor) menor=e;
 if(f<menor) menor=f;
 printf("El menor de %d,%d,%d,%d,%d,%d ",a,b,c,d,e,f);
 printf("\nEs %d",menor);
 getch();
}
