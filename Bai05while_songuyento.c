
#include <stdio.h>
#include <conio.h>
void main()

{
    int i,k,n,dem;
    printf("nhap n:=");
    scanf("%d",&n);
    i=2;
    while (i<=n)
		{
			dem=0;
			for(k=1;k<=i;k++)
               {
               	if (i%k==0)
                 dem++;
			   }
            if(dem==2)
            printf("%3d",i);
            i++;
		}
}
