#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    int h = 1;
    while (h < n) {
        if (h % 2 != 0) {
            printf("%d \n", h);
        }
        h= h + 1;
    }

}

