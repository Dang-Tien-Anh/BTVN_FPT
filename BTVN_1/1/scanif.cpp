#include <stdio.h>
int main()
{
	int A;
	printf("Dien diem so hoc sinh:\n");
	scanf("%d",&A);
	if(A >= 9){
	printf("Hoc sinh xuat sac");
	}else{
		if(A >= 8){
		printf("Hoc sinh gioi");
		}else{
			if(A >= 6){
			printf("Hoc sinh kha");
			}else{
				if(A >= 4){
				printf("Hoc sinh trung binh");
				}else{
					printf("Hoc sinh yeu");
				}
			}
		}
	}
}
