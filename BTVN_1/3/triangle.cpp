#include <stdio.h>
int main()
{
	printf("Ta co 3 canh cua tam giac la a, b va c\n");
	
	int A;
	printf("Dien a:\n");
	scanf("%d",&A);
	
	int B;
	printf("Dien b:\n");
	scanf("%d",&B);
	
	int C;
	printf("Dien C:\n");
	scanf("%d",&C);
	
	if(A+B<=C){
		printf("Khong phai la tam giac");
	}else{
		if(B+C<=A){
			printf("Khong phai la tam giac");
		}else{
			if(A+C<=B){
				printf("Khong phai la tam giac");
			}else{
				if(A==0){
					printf("Khong phai la tam giac");
				}else{
					if(B==0){
						printf("Khong phai la tam giac");
					}else{
						if(C==0){
							printf("Khong phai la tam giac");
						}else{
							printf("La tam giac");
						}
					}
				}
			}
		}
	}
}
