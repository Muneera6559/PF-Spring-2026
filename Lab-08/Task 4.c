#include <stdio.h>

int main() {
    float m[3][3], adj[3][3], inv[3][3], det = 0;

    printf("Enter 3x3 Matrix elements:\n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) scanf("%f", &m[i][j]);

    for(int i=0; i<3; i++)
        det += (m[0][i] * (m[1][(i+1)%3] * m[2][(i+2)%3] - m[1][(i+2)%3] * m[2][(i+1)%3]));

    printf("Determinant: %.2f (%s)\n", det, (det == 0) ? "Singular" : "Non-Singular"); 
    
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            adj[j][i] = (m[(i+1)%3][(j+1)%3] * m[(i+2)%3][(j+2)%3]) - (m[(i+1)%3][(j+2)%3] * m[(i+2)%3][(j+1)%3]);
        }
    }

    if (det != 0) {
        printf("Inverse Matrix:\n");
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) printf("%.2f\t", adj[i][j]/det);
            printf("\n");
        }
    }
    return 0;
}