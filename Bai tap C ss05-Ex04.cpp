#include <stdio.h>
   int main() {
   	int n, sum;
   	do { 
   	printf("Hay nhap mot so nguyen duong: ");
   	scanf("%d", &n);
   	if ( n <= 0) {
   		printf("So nhap vao khong hop le. Hay nhap lai\n");
	   }
	 }while (n <= 0);
	 sum = n * (n+1) / 2;
   	printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
   	return 0;
   }
