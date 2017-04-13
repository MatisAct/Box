#include<math.h>
#include<stdio.h>
int kiemtra(int n)
{
    int s=0;
    for (int i=1;i<n;i++) 
        if (n%i==0)
            s+=i;
    if (s==n)
        return 1;
    else
        return 0;
}
int main()
{
    printf("Cac so hoan hao: ");
    for (int i=1;i<=5000;i++)
        if (kiemtra(i)==1)
            printf("%d ",i);
}
