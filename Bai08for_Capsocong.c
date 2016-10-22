#include <stdio.h>
#include <conio.h>
void main()
{
    int u1,d,un,sn,k,x,i,n;
    u1=k; //số hạng đầu tiên của cấp số cộng
    d=x; // d là công sai của cấp số cộng
    printf("XIN CHAO BOSS\n");
    printf("Nhap gia tri cua k, x, n\n");
    scanf("%d%d%d",&k,&x,&n);
    for (i=1;i<n;i++)
        {
            un=k+(i-1)*x;
            sn=(i*(k+un))/2;
        }
    printf("un=%d, sn=%d",un,sn);
}
