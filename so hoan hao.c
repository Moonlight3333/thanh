#include <stdio.h>

int main(void)
{
    int n,i,s=0;
    printf("nhap so can kiem tra n= ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    if(s==n)
    {
        printf("\n %d la so hoan hao",n);
    }
    else
    {
        printf("\n %d khong phai la so hoan hao",n);
    }
    return 0;
}
