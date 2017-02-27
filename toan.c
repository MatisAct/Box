#include <stdio.h>
#include <conio.h>

int main()
{
float x,y;
char c;
printf("Nhap vao so thu nhat:");
scanf("%f",&x);
printf("Nhap vao so thu hai:");
scanf("%f",&y);

printf("Nhap vao 1 trong 4 phep toan +,-,*,/:");
scanf("%s", &c);
fflush(stdin);
if (c=='+'||c=='*'||c=='-'||c=='/')
{

switch(c)
{
case '+':printf("Tong cua %.1f va %.1f la %.1f:\n",x,y,x+y);
break;
case '-':printf("Hieu cua %.1f va %.1f la %.1f:\n",x,y,x-y);
break;
case '*':printf("Tich cua %.1f va %.1f la %.1f:\n",x,y,x*y);
break;
case '/':
if(y==0)
printf("phep toan khong ton tai:");
else
printf("Thuong cua %.1f va %.1f la %.1f:\n",x,y,x/y);
break;
}
}

else 
printf("ban nhap sai phep toan");
getch();
return 0;

}
