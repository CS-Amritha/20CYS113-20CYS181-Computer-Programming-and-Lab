A#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 3

struct student {
    char name[50];
    int age;
    enum Grade { A, B, C, D } grade;
};

struct student det[MAX_STUDENTS];
int count = 0;

int addStudent(struct student std) {
    if (count == MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return -1;
    }
    
    det[count] = std;
    count++;
    
    printf("Student added successfully.\n");
    return 0;
}

void displayStudents() {
    printf("List of students:\n");
    
    for (int i = 0; i < count; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", det[i].name);
        printf("Age: %d\n", det[i].age);
        
        switch (det[i].grade) {
            case A:
                printf("Score: A\n");
                break;
            case B:
                printf("Score: B\n");
                break;
            case C:
                printf("Score: C\n");
                break;
            case D:
                printf("Score: D\n");
                break;
            default:
                printf("Score: F\n");
                break;
        }
        
        printf("\n");
    }
}

void findHighestScoringStudent() {
    if (count == 0) {
        printf("No students available.\n");
        return;
    }
    
    int highestIndex = 0;
    
    for (int i = 1; i < count; i++) {
        if (det[i].grade < det[highestIndex].grade) {
            highestIndex = i;
        }
    }
    
    printf("Highest-scoring student:\n");
    printf("Name: %s\n", det[highestIndex].name);
    printf("Age: %d\n", det[highestIndex].age);
    
    switch (det[highestIndex].grade) {
        case A:
            printf("Score: A\n");
            break;
        case B:
            printf("Score: B\n");
            break;
        case C:
            printf("Score: C\n");
            break;
        case D:
            printf("Score: D\n");
            break;
        default:
            printf("Score: F\n");
            break;
    }
}

int main() {
    char score[5];
    int choice;
    
    do {
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: {
                struct student std;
                scanf("%s", std.name);
                scanf("%d", &std.age);
                scanf("%s", score);
                
                if (strcmp(score, "A") == 0) {
                    std.grade = A;
                } else if (strcmp(score, "B") == 0) {
                    std.grade = B;
                } else if (strcmp(score, "C") == 0) {
                    std.grade = C;
                } else if (strcmp(score, "D") == 0) {
                    std.grade = D;
                } else {
                    std.grade = D;
                }
                
                addStudent(std);
                break;
            }
            
            case 2: {
                displayStudents();
                break;
            }
            
            case 3: {
                findHighestScoringStudent();
                break;
            }
            
            case 4: {
                printf("Exiting the program. Thank you for using our system!\n");
                break;
            }
        }
    } while (choice != 4);
    
    return 0;
}