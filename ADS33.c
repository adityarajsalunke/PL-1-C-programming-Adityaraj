#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks1, marks2, marks3;
    float total, average;
};

int main()
{
    struct Student s;

    // Accept student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter marks for subject1: ");
    scanf("%f", &s.marks1);

    printf("Enter marks for subject2: ");
    scanf("%f", &s.marks2);

    printf("Enter marks for subject3: ");
    scanf("%f", &s.marks3);

    // Calculate total and average
    s.total = s.marks1 + s.marks2 + s.marks3;
    s.average = s.total / 3;

    // Display student details
    printf("\n----- Student Details -----\n");

    printf("Roll Number : %d\n", s.roll_no);
    printf("Name        : %s\n", s.name);
    printf("Subject 1   : %.2f\n", s.marks1);
    printf("Subject 2   : %.2f\n", s.marks2);
    printf("Subject 3   : %.2f\n", s.marks3);
    printf("Total Marks : %.2f\n", s.total);
    printf("Average     : %.2f\n", s.average);

    return 0;
}
