#include <stdio.h>

int main() {

    int obtained_marks;
    int percentage;

    printf("Enter Your Obtained Marks (sum of 5 subjects, out of 500): ");
    scanf("%d", &obtained_marks);

    percentage = (obtained_marks * 100) / 500;

    if (percentage >= 85) {
        printf("Grade A\n");
    } else if (percentage >= 70) {
        printf("Grade B\n");
    } else if (percentage >= 50) {
        printf("Grade C\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
