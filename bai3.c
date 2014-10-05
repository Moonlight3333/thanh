#include <stdio.h>
#include <conio.h>

int main()
{
    int n,maxi=0,re;
    do
    {
        printf("nhap n<=10000: ");
        scanf("%d",&n);
    }while(n>10000);
    do
    {
        re=n/10;
        if(n%10>maxi)
        {
            maxi=n%10;
        }
        n/=10;
    }while(re!=0);
    printf("chu so lon nhat la: %d",maxi);
    return;
}
