#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

	int sum = 0;
    int num = 1;

    while (num < n) {
        if (n % num == 0) {
            sum = sum + num;
        }
        num = num + 1;
    }

    if (sum == n) {
        printf("%d la so hoan hao \n" , n);
    } else{
    	printf("%d khong phai la so hoan hao \n", n);
	}
}


