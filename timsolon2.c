#include"stdio.h"
#include"stdio.h"
int main()
{

int a[10],i,j,fs,sc;

int n;
	printf("nhap vao so phan tu:");// nhap phan tu
		scanf("%d",&n);


for(i=0;i<n;i++)
	{printf("nhap phan tu thu %d:",i);//nhap cac he so
		scanf("%d",&a[i]);}


	if(a[0]>a[1])// so sanh a[0] va a[1]
	{
		fs=a[0];// gan lon nhat bang fs, nhi bang sc
		sc=a[1];
	
				}

	else 
	{
		sc=a[0];
		fs=a[1];
	
				}
				
for (i=2	;i<n;i++)
	
	{
		if(fs<a[i])// so sanh so lon nhat va phan tu a[i]
		{
			sc=fs;
			fs=a[i];	}// 12 3 4 5 
		else if (sc<a[i])
		{	
				
			sc=a[i];
				}
							}


	printf("\nchuoi ban vua nhap:");// in ra chuoi ban dau
	for(i=0;i<n;i++)
	{	printf(" %d",a[i]);	}
	
	
printf("\nso lon nhat:%d ; so lon nhi :%d",fs,sc);
getchar();					
}
