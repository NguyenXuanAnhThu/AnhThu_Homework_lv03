#include <stdio.h>
#include <conio.h>
void main()
{
    int i,n,k;
    printf("nhap n\n");
    scanf("%d",&n);
    i=1;
    k=1;
    do
    {
        k*=i;
        printf("k!=%d\n",k);
        i++;
    }
    while (i<=n);

}
