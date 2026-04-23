#include <stdio.h>
#include <string.h>

struct Patient {
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};

void displayAll(struct Patient p[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nPatient %d\n", i+1);
        printf("Name: %s\n", p[i].name);
        printf("Age: %d\n", p[i].age);
        printf("Blood Type: %s\n", p[i].bloodType);
        printf("ID: %d\n", p[i].patientID);
        printf("Diagnosis: %s\n", p[i].diagnosis);
    }
}

void searchByID(struct Patient p[], int n, int id) {
    int i, found = 0;
    for(i = 0; i < n; i++) {
        if(p[i].patientID == id) {
            printf("\nPatient Found\n");
            printf("Name: %s\n", p[i].name);
            printf("Age: %d\n", p[i].age);
            printf("Blood Type: %s\n", p[i].bloodType);
            printf("Diagnosis: %s\n", p[i].diagnosis);
            found = 1;
        }
    }
    if(found == 0) {
        printf("\nPatient not found\n");
    }
}

// Helper: reads a line, strips trailing newline
void readLine(char *buffer, int size) {
    fgets(buffer, size, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';  // remove trailing newline
}

int main() {
    struct Patient p[2];
    int i;

    for(i = 0; i < 2; i++) {
        printf("\nEnter details of patient %d\n", i+1);

        printf("Name: ");
        readLine(p[i].name, sizeof(p[i].name));

        printf("Age: ");
        scanf("%d", &p[i].age);
        getchar();  // consume leftover newline after scanf("%d")

        printf("Blood Type: ");
        readLine(p[i].bloodType, sizeof(p[i].bloodType));

        printf("Patient ID: ");
        scanf("%d", &p[i].patientID);
        getchar();  // consume leftover newline after scanf("%d")

        printf("Diagnosis: ");
        readLine(p[i].diagnosis, sizeof(p[i].diagnosis));
    }

    displayAll(p, 2);
    searchByID(p, 2, p[0].patientID);

    return 0;
}