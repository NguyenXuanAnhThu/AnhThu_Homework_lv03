#include <stdio.h>
#include <conio.h>
void main()
{
   int i,n,k;
   printf("Nhap gia tri n\n");
   scanf("%d",&n);
   k=1;
   for (i=1;i<=n;i++)
     {
         k*=i;
     printf("n!=%d\n",k);
     }

}
