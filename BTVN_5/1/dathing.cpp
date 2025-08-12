#include <cstdio> 

int main() {
    int n;
    int tong_uoc = 0;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

   
    printf("Cac uoc cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            tong_uoc += i;
        }
    }

    
    printf("Tong cac uoc la: %d\n", tong_uoc);

}

