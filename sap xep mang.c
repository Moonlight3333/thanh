#include <stdio.h>

int main()
{
    int a[8],i;
    for(i=1;i<=8;i++)
    {
        a[i]=0;
    }
    int cosokhong,j;
    do
    {
        for(i=1;i<=8;i++)
        {
            printf("%d",a[i]);
        }
        printf("\n");
        cosokhong=0;
        for(i=8;i>0;i--)
        {
            if(a[i]==0)
            {
                cosokhong=1;
                a[i]=1;
                for(j=i+1;j<=8;j++)
                {
                    a[j]=0;
                }
                break;
            }
        }
    }while(cosokhong==1);
    return 0;
}
