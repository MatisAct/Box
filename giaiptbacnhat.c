#include<stdio.h>
#include<math.h>
int main()
{
      float a,b,c,d,e,f;
      double x,y;
      printf (" Giai he phuong trinh bac nhat 2 an \n");
      printf (" aX+bY=c\n");
      printf (" dX+eY=f\n");
      printf(" Nhap cac he so \n");
      printf("a= "); scanf("%f", &a); printf("\a\n");
      printf("b= "); scanf("%f", &b); printf("\a\n");
       printf("c= "); scanf("%f", &c); printf("\a\n");
       printf("d= "); scanf("%f", &d); printf("\a\n");
      printf("e= "); scanf("%f", &e); printf("\a\n");
      printf("f= "); scanf("%f", &f); printf("\a\n");
      if (a/d!=b/e)
	  {
	  
	  		y=(c*d-f*a)/(b*d-e*a);
			
			x=(c-b*y)/a;
            
		printf("x=%f,y=%f",x,y);
			 }
       
	   
	   if (a/d==b/e && a/d!=c/f) 
	   {
	   printf("\nphuong trinh vo nghiem");
	   
	   }
	   else
	   printf("\nphuong trinh vo so nghiem");
	   }
