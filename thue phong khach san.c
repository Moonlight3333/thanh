#include <stdio.h>
#include <conio.h>
#define NUM_ROOM 20
char list[NUM_ROOM]={1,0,1,0,0,0,1,0,0,1,0,1,1,0,0,0,0,1,0,1};
void timphongtrong(void);
void traphong(void);
void lietkephongtrong(void);
void lietkephongdathue(void);
void main(void)
{
    printf("1.TIM PHONG TRONG\n");
    printf("2.TRA PHONG\n");
    printf("3.LIET KE PHONG CON TRONG\n");
    printf("4.LIET KE NHUNG PHONG DA THUE\n");
    printf("5.KET THUC");
    int choose;
    do
    {
        printf("\n");
        printf("Hay nhap mot so de thuc hien cong viec tuong ung: ");
        scanf("%d",&choose);
        switch(choose)
        {
            case 1: timphongtrong();
                    break;
            case 2: traphong();
                    break;
            case 3: lietkephongtrong();
                    break;
            case 4: lietkephongdathue();
                    break;
            case 5: exit(0);
            default: printf("Nhap sai! Hay nhap lai!");
        }
    }while(1>0);
}
void timphongtrong(void)
{
    int i;
    for(i=0;i<NUM_ROOM;i++)
    {
        if(list[i]==0)
        {
            printf("%d\t",i+1);
        }
    }
}
void traphong(void)
{
    printf("\n");
    printf("Nhap phong can tra: ");
    int room;
    scanf("%d",&room);
    list[room]=0;
    printf("Thank you!");
}
void lietkephongtrong()
{

}
void lietkephongdathue()
{
    int i;
    for(i=0;i<NUM_ROOM;i++)
    {
        if(list[i]==1)
        {
            printf("%d\t",i+1);
        }
    }
}
