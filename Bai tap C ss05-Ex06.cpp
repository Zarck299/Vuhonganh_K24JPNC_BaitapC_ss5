#include<stdio.h>

int main(){
    int a, b, choice;
    
  
    printf("CALCULATOR\n");
    printf("1. Tong 2 so\n");
    printf("2. Hieu 2 so\n");
    printf("3. Tich 2 so\n");
    printf("4. Thuong 2 so\n");
    printf("5. Thoat\n");

    
    printf("Nhap so bat ki: ");
    scanf("%d", &a);

    printf("Nhap so bat ki: ");
    scanf("%d", &b);

    
    while (1) {
        printf("\nNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("%d + %d = %d\n", a, b, a + b);
                break;
            case 2: 
                printf("%d - %d = %d\n", a, b, a - b);
                break;
            case 3: 
                printf("%d * %d = %d\n", a, b, a * b);
                break;
            case 4: // 
                if (b != 0) {
                    printf("%d / %d = %.2f\n", a, b, (float)a / b);
                } else {
                    printf("Khong the chia cho 0!\n");
                }
                break;
            case 5: 
                printf("Thoat chuong trinh.\n");
                return 0;
            default: 
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    }

    return 0;
}
