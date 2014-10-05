#include <stdio.h>
#include <conio.h>
#define MAXN 1000003

int QS(int d,int c,int a[])
{
    int l,r,mid,tg,x;
    l=d;
    r=c;
    mid=(l+r)/2;
    x=a[mid];
    do
    {
        while(a[l]<x) l++;
        while(a[r]>x) r--;
        if(l<=r)
        {
            tg=a[l];
            a[l]=a[r];
            a[r]=tg;
            l++;
            r--;
        }
    }while(l<=r);
    if(d<r) QS(d,r,a);
    if(l<c) QS(l,c,a);
}
int main(void)
{
    int n,a[MAXN],i;
    printf("nahp du lieu: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    QS(0,n-1,a);
    for(i=0;i<=n-1;i++)
        printf("%d ",a[i]);
    getch();
    return 0;
}
