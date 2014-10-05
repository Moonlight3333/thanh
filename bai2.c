#include <stdio.h>
#include <conio.h>
#define MAXN 50
int main()
{
    int a[MAXN],i,dem=1,n,maxi;
    printf("nhap so phan tu cua day so: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n day vua nhap la: \n");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a[i]);
    }
    maxi=a[1];
    for(i=2;i<=n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
            dem=0;
        }
        if(a[i]==maxi)
        {
            dem++;
        }
    }
    printf("phan tu lon nhat la: %d .xuat hien %d lan",maxi,dem);
    return 0;
}
