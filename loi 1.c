#include <stdio.h>

int ucln(int a,int b)
{
    int u;
    if(a<b)
        u=a;
    else
        u=b;
    while((a%u!=0)||(b%u!=0))//gan u=gia tri thap hon,neu a hoac b khong chia het cho u thi giam u
        u--;                    //khi a%u=0 va b%u=0 thi a, b cung chia het cho u => u la ucln
    return u;
}
int main()
{
    int a,b,UC;
    printf("nhap vao 2 so a va b");
    scanf("%d%d",&a,&b);
    UC=ucln(a,b);
    printf(" UC lon nhat la %d",UC);
    return 0;
}
