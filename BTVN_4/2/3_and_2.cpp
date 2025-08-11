#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    int h = n - 1;
    while (h > 0) {
        if (h % 2 == 0 & h % 3 == 0) {
            printf("So lon nhat gan voi n chia het cho 2 va 3 la: %d \n", h);
            break;
        }
        h= h - 1;
    }

}

