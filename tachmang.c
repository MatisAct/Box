#include <stdio.h>
#include <conio.h>
int n, i, j, k, a[100], am[100], duong[100];
void NhapMang()
{
	printf("Nhap n: ");scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Nhap a[%d]: ",i);scanf("%d",&a[i]);
	}
}
void TachSo()
{
	for(i=1;i<=n;i++)
	{
		if(a[i]<0)
		{
			am[j]=a[i];
			j++;
		}
		else if(a[i]>0)
		{
			duong[k]=a[i];
			k++;
		}
	}
}
void XuatMang()
{
	if(j==0)printf("\n Mang khong co so am \n");
	for(i=0;i<j;i++)
	{
		printf("\nSo am[%d] la: %d",i,am[i]);
	}
	if(k==0)printf("\n Mang khong co so duong \n");
	for(i=0;i<k;i++)
	{
		printf("\nSo duong[%d] la: %d",i,duong[i]);
	}
}
main()
{
	NhapMang();
	j=k=0;
	TachSo();
	XuatMang();
	getch();
}
