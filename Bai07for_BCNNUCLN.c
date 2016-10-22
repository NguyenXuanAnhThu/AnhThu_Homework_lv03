#include <stdio.h>
#include <conio.h>
void main()
{
    int m,n,uscln,bscnn,i;
    printf ("nhap gia tri cua m va n \n");
    scanf ("%d%d",&m,&n);
    for (i=0;m!=0 && n!=0 && i<m && i<n ;i++)
    {
    uscln=m;
    bscnn=(m*n)/uscln;
    if (m>n)
       {
        m=m-n;
       }
    else
       {
          n=n-m;
       }
    }
    printf ("bscnn=%d,uscln=%d ",bscnn,uscln);
}

