#include <stdio.h>

struct student
{
    int rollno;
    int marks;
    char name[50];
    float grade;
};

int main()
{
    int i;
    struct student s[5];
    printf("Enter information of students:\n");

    size_t size = sizeof(s) / sizeof(s[0]);

    // storing information
    for (i = 0; i < size; ++i)
    {
        s[i].rollno = i + 1;
        printf("\nFor roll number %d,\n", s[i].rollno);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
        printf("Enter grade: ");
        scanf("%f", &s[i].grade);
    }
    printf("\nDisplaying Information:\n\n");

    // displaying information
    for (i = 0; i < size; ++i)
    {
        if (s[i].marks >= 70)
        {
            printf("\nRoll number: %d\n", s[i].rollno);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %d\n", s[i].marks);
            printf("grade: %.1f\n", s[i].grade);
        }
    }
    return 0;
}

/*
#include <stdio.h>

struct student
{
    int rollno;
    int marks;
    char name[50];
    float grade;
};
// studentstructbytes * noofstudents = total bytes
// 32 * 5 = 160 => sizeof(s)
// 32 => sizeof(s[0]) means 1 student struct datatype size
int main()
{
    int i;
    // struct student s[5];
    printf("Enter information of students:\n");

    // int no_of_students = sizeof(s) / sizeof(s[0]);

    struct student s[] = {
        {1, 68, "Amar\0", 6.84},
        {2, 70, "Bimbisara\0", 7.43},
        {3, 88, "Chathur\0", 8.87},
        {4, 68, "Darshana\0", 6.823},
        {5, 78, "Eshwar\0", 7.85}};

    size_t size = sizeof(s) / sizeof(s[0]);

    // storing information
    // for (i = 0; i < size; ++i)
    // {
    //     s[i].rollno = i + 1;
    //     printf("\nFor roll number %d,\n", s[i].rollno);
    //     printf("Enter name: ");
    //     scanf("%s", s[i].name);
    //     printf("Enter marks: ");
    //     scanf("%d", &s[i].marks);
    //     printf("Enter grade: ");
    //     scanf("%f", &s[i].grade);
    // }
    printf("\nDisplaying Information:\n\n");

    // displaying information
    for (i = 0; i < size; ++i)
    {
        if (s[i].marks >= 70)
        {
            printf("\nRoll number: %d\n", s[i].rollno);
            printf("Name: ");
            puts(s[i].name);
            // printf("Name: %s", s[i].name);
            printf("Marks: %d\n", s[i].marks);
            printf("grade: %.1f\n", s[i].grade);
        }
    }
    return 0;
}

*/