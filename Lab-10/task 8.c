#include <stdio.h>

int main() {
    FILE *fptr;
    int score, i, sum = 0, val;

    fptr = fopen("survey.txt", "w");
    for (i = 0; i < 5; i++) {
        printf("Enter score %d: ", i + 1);
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }
    fclose(fptr);

    fptr = fopen("survey.txt", "r");
    while (fscanf(fptr, "%d", &val) != EOF) {
        sum += val;
    }
    fclose(fptr);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / 5);

    return 0;
}