#include <stdio.h>
#include <string.h>

struct Department {
    char deptCode[10];
    char deptName[50];
};

struct Course {
    char courseCode[10];
    char courseName[60];
    int creditHours;
    struct Department dept;
};

void searchDept(struct Course c[], int n, char code[]) {
    int i, found = 0;

    printf("\nCourses of Department %s:\n", code);

    for(i = 0; i < n; i++) {
        if(strcmp(c[i].dept.deptCode, code) == 0) {
            printf("%s (%s) - %d credit hours\n",
                   c[i].courseName,
                   c[i].courseCode,
                   c[i].creditHours);
            found = 1;
        }
    }

    if(found == 0) {
        printf("No course found\n");
    }
}

int main() {
    struct Course c[2];
    int i;

    for(i = 0; i < 2; i++) {
        printf("\nEnter details for course %d\n", i+1);

        printf("Course code: ");
        scanf("%s", c[i].courseCode);

        getchar(); // buffer clear

        printf("Course name: ");
        fgets(c[i].courseName, 60, stdin);
        c[i].courseName[strcspn(c[i].courseName, "\n")] = '\0';

        printf("Credit hours: ");
        scanf("%d", &c[i].creditHours);

        printf("Dept code: ");
        scanf("%s", c[i].dept.deptCode);

        getchar();

        printf("Dept name: ");
        fgets(c[i].dept.deptName, 50, stdin);
        c[i].dept.deptName[strcspn(c[i].dept.deptName, "\n")] = '\0';
    }

    searchDept(c, 2, c[0].dept.deptCode);

    return 0;
}