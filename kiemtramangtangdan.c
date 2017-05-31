#include <stdio.h>
#include <conio.h>
//nhap mang.
int nhapmang(int a[],int n){
	for(int i=0;i<n;i++)
	{
		printf("Phan tu %d =",i);
      scanf("%d", &a[i]);
	}
	
}

//xuat mang.
int xuatmang(int a[], int n) {
	printf("\n");
	for (int i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
	
}
int kiemtra(int a[],int n)
{
	int kiemtra = 0;
	for(int i = 0;i<n-1;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				kiemtra = 1;break;
			}
		}
		if(kiemtra==1)break;
	}
	
	if(kiemtra==1)printf("la mang khong tang");
	else printf("la mang tang");
	
}

int main()
{	int a[100];
	int n;
	printf("nhap vao so phan tu: ");
	scanf("%d",&n);
	nhapmang(a,n);

	xuatmang(a,n);
	kiemtra(a,n);

return 0;	
}
