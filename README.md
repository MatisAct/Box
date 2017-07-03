#include"string.h"

strlen(biến)// đếm số phần tử của biến

đối với nhập mảng char , dùng gets

 strcpy(char A[], char B[]) // copy chuoi B[] vao chuoi A[]

## thao tác với file:

  fscanf(f, "%d", &a[i]); với f là tên file khai báo , &a đọc các phần tử trong file ;
  
  có thể dùng printf để in các phần tử vừa đọc ra
  
  - strcpy (String Copy) dùng để sao chép toàn bộ ký tự của chuỗi này qua chuỗi khác
  
  - strcmp (String Compare)  là hàm dùng để so sánh hai chuỗi với nhau. Hàm sẽ so sánh hai chuỗi với nhau và trả về các giá trị tương ứng.

## ctype.h trong C

1 Hàm int isalnum(int c)

Hàm này kiểm tra xem ký tự đã truyền có phải là chữ-số không

2	
Hàm int isalpha(int c)

Hàm này kiểm tra xem ký tự đã truyền có phải là chữ cái không

3	
Hàm int iscntrl(int c)

Hàm này kiểm tra xem ký tự đã truyền có phải là ký tự điều khiển không

4	
Hàm int isdigit(int c)

Hàm này kiểm tra xem ký tự đã truyền có phải là chữ số thập phân không

5	
Hàm int isgraph(int c)

Hàm này kiểm tra xem ký tự đã truyền có phải là ký tự graphical với Locale đã cho không

6	
Hàm int islower(int c)

Hàm này kiểm tra xem ký tự đã truyền có phải là một chữ thường không

7	
Hàm int isprint(int c)

Hàm này kiểm tra xem ký tự đã truyền có thể in được không

8	
Hàm int ispunct(int c)

Hàm này kiểm tra xem ký tự đã truyền có phải là một punctuation char không

9	
Hàm int isspace(int c)

Hàm này kiểm tra xem ký tự đã truyền có phải là white-space

10	
Hàm int isupper(int c)

Hàm này kiểm tra xem ký tự đã truyền có phải là một chữ hoa không

11	
Hàm int isxdigit(int c)

Hàm này kiểm tra xem ký tự đã truyền có phải là ký tự thập lục phân không

