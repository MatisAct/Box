/*Viết chương trình đọc mảng số nguyên từ tập tin (văn bản) MANG.TXT sau đó hiển thị mảng vừa đọc ra màn hình. Cấu trúc tập tin MANG.TXT gồm 2 dòng, dòng đầu là số phần tử của mảng, dòng sau là giá trị các phần tử của mảng (cách nhau bởi một khoảng trắng). */
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[99], n, i;
    FILE *f = fopen("us.TXT", "r"); //m? file d? d?c  
    fscanf(f, "%d", &n);              //d?c s? ph?n t? c?a m?ng và luu vào n
    for (i = 0; i < n; i++)           //d?c l?n lu?t t?ng giá tr? c?a m?ng
        fscanf(f, "%d", &a[i]);
    fclose(f);                        //dóng file
    printf("Mang vua doc la: ");      //hi?n th? m?ng
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    
    FILE *f1=fopen("hihi.txt","wt");
    for (i=0;i<n;i++)
    fprintf(f1,"%d",a[i]);
    fclose(f1);
    getch();
}
