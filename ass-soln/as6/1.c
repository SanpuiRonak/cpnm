#include <stdio.h>
#include <stdlib.h>
struct student {
    int roll;
    char name[100];
    char dept[100];
    char course[100];
    int yearOfJoining;
};
char garbage;
typedef struct student student;
student* newStudent();
void sameYear(student* s[], int n);
void rollInfo(student* s[], int n);

int main() {
    int n;

    printf("Enter no of students\n");
    scanf("%d%c", &n, &garbage);
    student* s[n];
    for (int i = 0; i < n; i++) {
        s[i] = newStudent();
    }
    printf(
        "Enter:\n1 to to show names of student in a year\n2 to show info on a "
        "roll no.\n");
    int op;
    scanf("%d%c", &op, &garbage);
    switch (op) {
        case 1:
            sameYear(s, n);
            break;
        case 2:
            rollInfo(s, n);
            break;
        default:
            printf("Invalid option");
            break;
    }
}

void rollInfo(student* s[], int n) {
    printf("Enter Roll:\n");
    int roll;
    int happend = 0;
    scanf("%d%c", &roll, &garbage);
    for (int i = 0; i < n; i++) {
        if (s[i]->roll == roll) {
            printf("%s%s%s%d\n%d", s[i]->name, s[i]->dept, s[i]->course,
                   s[i]->roll, s[i]->yearOfJoining);
            happend++;
        }
    }
    if (!happend) {
        printf("No such roll exist\n");
    }
}

void sameYear(student* s[], int n) {
    printf("Enter year:\n");
    int year;
    scanf("%d", &year);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i]->yearOfJoining == year) {
            printf("%s", s[i]->name);
            count++;
        }
    }
    if (count == 0) printf("No student joined on year %d", year);
}

student* newStudent() {
    student* s = malloc(sizeof(student));

    printf("Enter name\n");
    int x;
    fgets((s->name), 100, stdin);
    printf("Enter department\n");
    fgets((s->dept), 100, stdin);
    printf("Enter course\n");
    fgets((s->course), 100, stdin);
    printf("Enter roll\n");
    scanf("%d%c", &(s->roll), &garbage);
    printf("Enter Year of joining\n");
    scanf("%d%c", &(s->yearOfJoining), &garbage);
    return s;
}