#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    int sum = 0;

    for (	; n > 0; n = n / 10) {
        sum = sum + n % 10;
    }

    printf("Tong cac chu so: %d\n", sum);
}

