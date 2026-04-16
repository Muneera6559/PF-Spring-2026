#include <stdio.h>

int main() {
    FILE *fptr;
    char name[20], line[100];
    int s1, s2, s3;
    float avg;

    printf("Enter name and 3 scores: ");
    scanf("%s %d %d %d", name, &s1, &s2, &s3);
    avg = (s1 + s2 + s3) / 3.0;

    fptr = fopen("report.txt", "w+");
    fprintf(fptr, "--- Report Card ---\nName: %s\nAverage: %.2f\nStatus: %s\n", 
            name, avg, (avg >= 50 ? "Pass" : "Fail"));

    rewind(fptr); 

    printf("\nFile Content:\n");
    while (fgets(line, sizeof(line), fptr)) {
        printf("%s", line);
    }

    fclose(fptr);
    return 0;
}