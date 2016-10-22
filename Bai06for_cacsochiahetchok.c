#include <stdio.h>
#include <conio.h>
void main()
{
   int i,n,k,dem=0;
   printf("Nhap gia tri n,k \n");
   scanf("%d%d",&n,&k);
   for (i=0;i<n;i++)
    if (i%k==0)
     dem++;
     printf("cac so chia het cho k la %d",dem);
}
