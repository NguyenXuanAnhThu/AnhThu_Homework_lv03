#include <stdio.h>
#include <conio.h>
void main()
{
   int i,n;
   printf("Nhap gia tri n\n");
   scanf("%d",&n);
   i=0;
   while (i<=n)
   {
    if (i%2==0)
    printf("so chan %d\n",i);
    i++;
   }
}
