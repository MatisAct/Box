#include"stdio.h"
int main()
{
	int n,i1,i2,i3;
	printf("nhap vao so muon kiem tra:");
	scanf("%d",&n);
	i1=n/100;
	i2=(n/10)%10;
	i3=n%10;
	
	if((i1+i2+i3)%3==0)
	printf("\n%d la so chia het cho 3!",n);
	else
	printf("\n%d la so khong chia het cho 3!",n);
}


//
#include"stdio.h"
int main()
{
	int n,i;
	printf("nhap vao so muon kiem tra:");
	scanf("%d",&n);
	i=n/100+(n/10)%10+n%10;
	
	if(i%3==0)
	printf("\n%d la so chia het cho 3!",n);
	else
	printf("\n%d la so khong chia het cho 3!",n);
}
