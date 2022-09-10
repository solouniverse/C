// Print students with marks > 70
#include <stdio.h>
#include <io.h>

struct Student
{
    int rollno;
    int marks;
    char name[20];
    float grade;
};

int main()
{
    int n, i = 0;

    printf("Enter no of students: ");
    scanf("%d", &n);
    size_t noofstudents = (n * sizeof(n)) / sizeof(n);
    printf("No of students enrolled: %d", noofstudents);


    // struct Student s[5];
    // printf("sizeof n %d\n", sizeof(n));
    // printf("sizeof struct s %d\n", sizeof(s));
    // int length=sizeof(s)/sizeof(s[0]);
    // printf("Total no of students: %d", length);

    // while (i < n)
    // {
    //     printf("Student %0d details\n", i+1);

    //     printf("Enter rollno: ");
    //     scanf("%d", &s.rollno);
    //     printf("Enter marks: ");
    //     scanf("%d", &s.marks);
    //     printf("Enter name: ");
    //     scanf("%s", &s.name);
    //     printf("Enter grade: ");
    //     scanf("%f", &s.grade);

    //     i++;
    // }

    // i = 0;
    // while (i < n)
    // {
    //     printf("\n");

    //     printf("Rollno: %d\n", s.rollno);
    //     printf("Marks: %d\n", s.marks);
    //     printf("Name: %s\n", s.name);
    //     printf("Grade: %f\n", s.grade);
    //     i++;
    // }
}