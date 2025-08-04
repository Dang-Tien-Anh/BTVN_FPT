#include <stdio.h>
int main()
{
	printf("Ta co phuong trinh ax+b=c\n");
	
	int A;
	printf("Dien a:\n");
	scanf("%d",&A);
	
	int B;
	printf("Dien b:\n");
	scanf("%d",&B);
	
	if(A=0){
		printf("Phuong trinh thoa man voi moi x");
	}else{
		printf("x=", -A/B);
	}
}
