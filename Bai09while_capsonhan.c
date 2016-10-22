#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a,x,an,sn,r,q,n,i;
    a=x;// số hạng đầu tiên của cấp số nhân
    q=r;//công bội của cấp số nhân
    printf("XIN CHAO BOSS\n");
    printf("Nhap gia tri x, r, n\n");
    scanf("%d%d%d",&x,&r,&n);
    i=1;
    while (i<=n)
        {
          an=x*pow(r,i-1);
          sn=(x*(1-pow(r,i)))/(1-r);
          i++;
        }
    printf("an=%d, sn=%d",an,sn);

}

