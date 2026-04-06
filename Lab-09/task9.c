#include <stdio.h>

int main() {
    int arr[4][5] = {
        {1,1,0,1,1},
        {0,1,0,1,0},
        {1,1,1,1,1},
        {0,0,1,0,1}
    };

    int (*p)[5] = arr;
    int i, j, total;

    for(i = 0; i < 4; i++) {
        total = 0;

        for(j = 0; j < 5; j++) {
            printf("%d ", (*(p+i))[j]);
            total += (*(p+i))[j];
        }

        printf("Total: %d", total);

        if(total < 3)
            printf(" Risk");

        printf("\n");
    }

    return 0;
}