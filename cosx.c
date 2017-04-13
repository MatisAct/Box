#include <stdio.h>
#include <math.h>
int tinhgiaithua(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*tinhgiaithua(n-1);

}
int main()
{
   float e=1,x,E=0.0001,pi=3.14;
    
   int n=0;
   float cosx=0;
   printf("Nhap vao so goc: ");
   scanf("%f",&x);
   while (e>E)
   {
       e=pow((float)x*pi/180,(2*n))/tinhgiaithua(2*n);
       printf("e= %f \n",e);
       if (n%2==0)
       {
           cosx=cosx+e;
       }
       else
       {
           cosx=cosx-e;
       }
       n++;
   }
   printf("cos(%0.1f)=%0.5f",x,cosx);

}
