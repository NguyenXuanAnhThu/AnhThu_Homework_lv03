#include <stdio.h>
#include <conio.h>
void main ()
{
    int m,n,uscln,bscnn,i;
    printf ("nhap gia tri cua m va n \n");
    scanf ("%d%d",&m,&n);
    uscln=m;
    bscnn=(m*n)/uscln;
    i=0;
    while (m!=0 && n!=0 && i<m && i<n)
    {
        if (m>n)
        {
            m = m-n;
        }
        else
        {
              n = n-m;
        }
        i++;
    }

        printf("\n uscln =%d\n",uscln);
        printf("\n bscnn =%d\n",bscnn);
}
