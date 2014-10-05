#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a,b;
    printf("nhap a: ");scanf("%d",&a);
    printf("nhap b: ");scanf("%d",&b);
    while(a!=b)
    {
        if(a>b) a=abs(a-b);
            else b=abs(a-b);
    }
    printf("uoc chung lon nhat cua 2 so la: %d",a);
    return;
}
