#include <stdio.h>

int main() {
    int rating;
    int excellent = 0;
    int satisfactory = 0;
    int needsImprovement = 0;

    printf("Enter employee rating (0-100) or -1 to stop: ");
    scanf("%d", &rating);

    while (rating != -1) {

        if (rating >= 85 && rating <= 100) {
            excellent++;
        }
        else if (rating >= 60 && rating < 85) {
            satisfactory++;
        }
        else if (rating >= 0 && rating < 60) {
            needsImprovement++;
        }
        else {
            printf("Invalid rating! Please enter between 0 and 100.\n");
        }

        printf("Enter employee rating (0-100) or -1 to stop: ");
        scanf("%d", &rating);
    }

    printf("\nFinal Classification:\n");
    printf("Excellent: %d\n", excellent);
    printf("Satisfactory: %d\n", satisfactory);
    printf("Needs Improvement: %d\n", needsImprovement);

    return 0;
}
