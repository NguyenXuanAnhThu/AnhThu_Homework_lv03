#include <stdio.h>
#include <conio.h>
void main()
{
   int i,n;
   printf("Nhap gia tri n\n");
   scanf("%d",&n);
   i=0;
   do
   {
       if (i%2==0)
        printf("cac so chan la %d\n",i);
       i++;
   }
   while (i<n);
}
