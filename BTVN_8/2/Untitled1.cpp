#include <cstdio>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int a[100]; 
    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result[100]; 
    int newSize = 0; 
    
    for (int i = 0; i < n; i++) {
        int alreadyExists = 0; 

        
        for (int j = 0; j < newSize; j++) {
            if (a[i] == result[j]) {
                alreadyExists = 1;
                break;
            }
        }

        if (alreadyExists == 0) {
            result[newSize] = a[i];
            newSize++;
        }
    }

    printf("Mang sau khi loai bo phan tu trung lap:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

