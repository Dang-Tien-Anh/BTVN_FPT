#include <cstdio>

int main() {
    int n, k;
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int a[100];
    printf("Nhap mang %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap so lan xoay trai k: ");
    scanf("%d", &k);

    k = k % n;

    int result[100];

    for (int i = 0; i < n - k; i++) {
        result[i] = a[i + k];
    }

    for (int i = 0; i < k; i++) {
        result[n - k + i] = a[i];
    }

    printf("Mang sau khi xoay trai %d lan:\n", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

}

