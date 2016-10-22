#include <stdio.h>
#include <conio.h>
void main()
{
   int i,n,k,dem=0;
   printf("Nhap gia tri n,k \n");
   scanf("%d%d",&n,&k);
   i=0;
   while (i<n)
   {
        if (i%k==0)
        dem++;
        i++;
   }
   printf("cac so chia het cho k la =%d\n",dem);

}
