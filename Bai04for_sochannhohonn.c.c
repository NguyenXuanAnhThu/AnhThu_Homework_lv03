#include <stdio.h>
#include <conio.h>
void main()
{
   int i,n;
   printf("Nhap gia tri n\n");
   scanf("%d",&n);
   for (i=0;i<=n;i++)
        if (i%2==0)
        printf("so chan %d\n",i);
}
