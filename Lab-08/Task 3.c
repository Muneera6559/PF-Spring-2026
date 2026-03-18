#include <stdio.h>

int main() {
    float temp[7][3];
    float highest = -999.0;

    for (int i = 0; i < 7; i++) {
        float daySum = 0;
        printf("Day %d (Morning, Afternoon, Night): ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &temp[i][j]);
            if (temp[i][j] > highest) highest = temp[i][j]; 
            daySum += temp[i][j];
        }
        printf("Day %d Average: %.2f\n", i + 1, daySum / 3.0); 
    }
    printf("Weekly Highest Temperature: %.2f\n", highest);
    return 0;
}