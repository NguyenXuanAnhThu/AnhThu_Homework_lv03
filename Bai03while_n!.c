#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,k;
    printf("nhap n\n");
    scanf("%d",&n);
    i=1;
    k=1;
    while (i<=n)
     {
         k*=i;
         i++;
     }
 printf("k!=%d",k);
}
