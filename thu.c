#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(void)
{
char name[30],birth[15],mssv[8],lop[10],khoa[5];
int i;
printf("nhap ho ten sinh vien: ");
gets(name);
printf("nhap ngay thang nam sinh dd/mm/yyyy: ");
scanf("%s",birth);
printf("nhap ma so sinh vien: ");
scanf("%s",mssv);
printf("nhap lop sinh vien (vd:BK1.01): ");
scanf("%s",lop);
printf("nhap khoa sinh vien (vd:k59): ");
scanf("%s",khoa);
for(i=1;i<50;i++)
printf("=");
printf("\n|| Ha Noi University of Scientific & Technology ||\n");
printf("|| STUDENT CARD ||\n");
printf("|| Name: %-30s||\n",name);
printf("|| Date of birth: %-30s||\n",birth);
printf("|| Code: %-30s||\n",mssv);
printf("|| Class: %-30s||\n",lop);
printf("|| Years: %-30s||\n",khoa);
for(i=1;i<50;i++)
printf("=");
return 0;
}
