#include <stdio.h>

int main() {
    void *p;

    int a = 847;
    float b = 73.6;
    char c = 'W';

    p = &a;
    printf("%d\n", *(int*)p);

    p = &b;
    printf("%.2f\n", *(float*)p);

    p = &c;
    printf("%c\n", *(char*)p);

    return 0;
}