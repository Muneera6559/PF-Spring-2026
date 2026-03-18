#include <stdio.h>

int main() {
    int r, c, mat[5][5], isZero=1, isDiag=1, isIden=1, isScal=1, isSym=1, isUpper=1, isLower=1;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) scanf("%d", &mat[i][j]);

    if (r == c) printf("Square Matrix\n"); 
    else printf("Rectangular Matrix\n"); 

    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(mat[i][j] != 0) isZero = 0;
            if(r == c) {
                if(i != j && mat[i][j] != 0) isDiag = 0; 
                if(i == j && mat[i][j] != 1) isIden = 0; 
                if(i == j && mat[i][j] != mat[0][0]) isScal = 0;
                if(mat[i][j] != mat[j][i]) isSym = 0;
                if(i > j && mat[i][j] != 0) isUpper = 0; 
                if(i < j && mat[i][j] != 0) isLower = 0; 
            }
        }
    }
    if(isZero) printf("Zero/Null Matrix\n"); 
    if(r==c && isDiag) printf("Diagonal Matrix\n");
    if(r==c && isDiag && isIden) printf("Identity Matrix\n");
    if(r==c && isSym) printf("Symmetric Matrix\n");
    return 0;
}