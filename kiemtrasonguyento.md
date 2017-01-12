#include <stdio.h>

int main()
{
    int i,n,a;
    printf("nhap vao so can kiem tra:");
    scanf("%d",&n);
        for(i=2;i<=n;i++)
         {
            a=n%i;
            if(a==0)
                {
                    if(i==n)
                        {
                            printf("%d la so nguyen to",n);
                            
                        }
                    else
                        {
                            printf("%d khong phai la so nguyen to:",n);
                            
                        }
                        break;
                }
} 
}
