#include<stdio.h>
   int main(){
   	int i, j;
   	printf("Day la tat ca cac bang cuu chuong tu 1 den 9: \n");
   	   for (int i = 1; i <= 9; i++) {
        printf("Bang cuu chuong cua %d:\n", i);
         for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
 }
 return 0;
   }
