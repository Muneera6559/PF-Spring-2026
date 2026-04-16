#include <stdio.h>

int main() {
    int arr[6] = {45,60,30,50,55,40};
    int *p = arr;
    int i, max;

    max = *p;
    for(i = 1; i < 6; i++) {
        if(*(p+i) > max)
            max = *(p+i);
    }

    for(i = 0; i < 6; i++) {
        *(p+i) = (int)(((float)*(p+i)/max)*100);
    }

    for(i = 0; i < 6; i++) {
        printf("%d ", *(p+i));
    }

    return 0;
}