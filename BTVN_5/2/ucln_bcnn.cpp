#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a, b: ");
    scanf("%d%d", &a, &b);
    
    int ucln = 1;

    for (int i = 1; i <= (a < b ? a : b); i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }

    int bcnn = (a * b) / ucln;
    
	
	printf("UCLN: %d\n", ucln);
    printf("BCNN: %d\n", bcnn);
}

