#include <stdio.h>

  int main () {
  	int n = 67, x;
  	do {
  	printf("Hay nhap gia tri chinh xac cua so cho truoc: ");
  	scanf("%d", &x);
   if (x != n) { 
            printf("Sai roi, hay thu lai\n");
        }
    } while (x != n); 

    printf("Chinh xac!\n");

    return 0;
}
