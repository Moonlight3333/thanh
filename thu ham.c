#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
    printf("nhap a: ");
    scanf("%d",&a);
    printf("nhap b: ");
    scanf("%d",&b);
    add(a,b);
    return;
}
int add(int a,int b)
{
    printf("tong a+b= %d",a+b);
    return;
}
