#include"stdio.h"
#include"stdlib.h"
int main()
{
	int i,j,a[10][10],b[10][10],c[10][10],d[10][10];
	int cot1,hang1,cot2,hang2;
	
	
	printf("nhap so hang so cot ma tran 1:");
		scanf("%d %d",&cot1,&hang1);
	
	printf("\n nhap so cot va hang ma tran 2:");
		scanf("%d %d",&cot2,&hang2);



	printf("\nnhap vao ma tran 1\n");		
	for(i=0;i<cot1;i++)
	{	for(j=0;j<hang1;j++)
		{
			printf("nhap phan tu thu a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		
									}
													}

	printf("\nnhap vao ma tran 2:");
	for(i=0;i<cot2;i++)
	{	for(j=0;j<hang2;j++)
		{
			printf("\nnhap phan tu thu b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		
									}
													}


int k;

system("cls");
	lap:
	{printf("ban muon lam gi tiep theo:\n 1:cong 2 ma tran\t\t2:tru 2 ma tran\t\t 3:in ra 2 ma tran");
	printf("\n bam chon so tren ban phim:");
			scanf("%d",&k);}
		
		if(k==1)
		{	
			if(cot1!=cot2 || hang1!=hang2)
				{printf("\nma tran vua nhap khong cung cap");
				goto lap;}
			else 
			{
				for (i = 0; i < cot1; i++)
      				for (j = 0; j < hang1; j++) {
        				 c[i][j] = a[i][j] + b[i][j];
        				 d[i][j] = a[i][j] - b[i][j];
     													 }

  
   				printf("\nKet qua cua phep tru hai ma tran la: \n");
  					 for (i = 0; i < cot1; i++) {
     						 for (j = 0; j < hang1; j++) {
        						 printf("%d\t", c[i][j]);
     																 }
    										  printf("\n");
   }	}}
   		if(k==2)
   		{
   				if(cot1!=cot2 || hang1!=hang2)
				{printf("\nma tran vua nhap khong cung cap");
				goto lap;}
			else 
			printf("\nKet qua cua phep tru hai ma tran la: \n");
  					 for (i = 0; i < cot1; i++) {
     						 for (j = 0; j < hang1; j++) {
        						 printf("%d\t", d[i][j]);
     																 }
    										  printf("\n");
   			
   		
								


}}}
