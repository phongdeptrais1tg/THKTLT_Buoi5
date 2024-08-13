#include <stdio.h>


int sum(int n) {
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}
int main() {
    int choice, n, x;
    int arr[100];
    int result = -1;

    while (1) {
        printf("\nMenu\n");
        printf("1. Tinh tong tu 1 den n\n");
        
        printf("6. Thoat\n");
        printf("Chon mot tuy chon: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Nhap n: ");
            scanf("%d", &n);
            printf("Tong tu 1 den %d la %d\n", n, sum(n));
            break;
        
        case 6:
            return 0;
        default:
            printf("Tuy chon khong hop le! Vui long chon lai.\n");
        }
    }
}