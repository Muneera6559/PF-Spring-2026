#include <stdio.h>

int main() {
    int r1, c1, r2, c2, a[3][3], b[3][3], res[3][3] = {0};
    printf("Matrix 1 (R C): "); scanf("%d %d", &r1, &c1);
    printf("Matrix 2 (R C): "); scanf("%d %d", &r2, &c2);

    if (c1 != r2) { 
        printf("Invalid Dimensions for Multiplication!\n");
        return 0;
    }

    printf("Enter Matrix 1:\n");
    for(int i=0; i<r1; i++) for(int j=0; j<c1; j++) scanf("%d", &a[i][j]);
    printf("Enter Matrix 2:\n");
    for(int i=0; i<r2; i++) for(int j=0; j<c2; j++) scanf("%d", &b[i][j]);

    printf("\n");
    printf("Multiplication:\n");
	for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            for(int k=0; k<c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
            printf("%d\t", res[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}