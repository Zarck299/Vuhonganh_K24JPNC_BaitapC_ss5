#include <stdio.h>
   int main() {
   	int n, sum;
   	do { 
   	printf("Hay nhap mot so nguyen duong(Tu 1 den 10): ");
   	scanf("%d", &n);
   	if ( n < 1 || n > 10) {
   		printf("So nhap vao khong hop le. Hay nhap lai\n");
	   }
	 }while (n < 1 || n > 10); {
	 printf("Bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
	 }
	
   	return 0;
   }
