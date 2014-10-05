#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10][10],mini,cot,hang,n;
    printf("nhap n= ");
    scanf("%d",&n);
    for(hang=1;hang<=n;hang++)
        for(cot=1;cot<=n;cot++)
        {
            printf(" nhap so a[%d,%d]= ",hang,cot);
            scanf("%d",&a[hang][cot]);
        }
    for(hang=1;hang<=n;hang++)
        for(cot=1;cot<=n;cot++)
        {
            printf("%d\t",a[hang][cot]);
            if(cot==n)
            {
                printf("\n");
            }
        }
    mini=a[1][1];
    for(hang=1;hang<=n;hang++)
        for(cot=1;cot<=n;cot++)
        {
            if(a[hang][cot]<mini)
            {
                mini=a[hang][cot];
            }
        }
    printf("\n gia tri nho nhat la: %d",mini);
    return;
}
