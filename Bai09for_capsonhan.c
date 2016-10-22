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
    for (i=1;i<=n;i++)
        {
          an=x*pow(r,i-1);
          sn=(x*(1-pow(r,i)))/(1-r);
        }
    printf("an=%d, sn=%d",an,sn);

}
