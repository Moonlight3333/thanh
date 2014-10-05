#include <stdio.h>
#include <conio.h>

int main(void)
{
    float x,s=0;
    int i,n,gt=1;
    scanf("%d %f",&n,&x);
    for(i=1;i<=n;i++)
    {
        gt*=i;
        s+=(x/gt);
        x*=x;
    }
    printf("s= %f",s);
    return 0;
}
