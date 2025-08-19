#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int player[n]; 

    int sum = 0;
    int count = 0;

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &player[i]);
        if (player[i] % 2 != 0) {
            sum += player[i];
            count++;
        }
    }

    if (count > 0) {
        printf("Trung binh cong cac so le la: %d\n", sum / count);
    } else {
        printf("Khong co so le nao trong mang.\n");
    }

    return 0;
}

