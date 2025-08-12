#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    while (n >= 10) {
        n = n / 10;
    }

    printf("Chu so dau tien: %d\n", n);
}

