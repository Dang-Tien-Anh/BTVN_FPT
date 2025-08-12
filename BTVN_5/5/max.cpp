#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

	int maxdgt = 0;
	
	for( ; n > 0 ; n = n / 10){
		int dgt = n % 10;
		if (dgt > maxdgt){
			maxdgt = dgt;
		}
	}
	
	printf("Chu so lon nhat la %d", maxdgt);
}
