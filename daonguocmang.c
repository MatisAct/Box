#include"stdio.h"
#include"conio.h"
int nhapmang(int n)
{
	int a[100];
	for(int i=0;i<n;i++)
{	printf("nhap phan tu thu a[%d]",i);
	scanf("%d",&a[i]);
}	}
int xuatmangdao(int n)
{
		int a[100];
		
		printf("\nmang dao la:");
	for(int i=0;i<n;i++)

	printf("%d",a[n-i-1]);
	}
int main()
{
	int n;
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	nhapmang(n);
	xuatmangdao(n);
	}
