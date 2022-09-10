#include <stdio.h>
struct student
{
    int rollno;
    int marks;
    char name[50];
    float grade;
};

void printStudents(struct student *s, int size);

int main()
{
    struct student s[] = {
        {1, 68, "Amar\0", 6.84},
        {2, 70, "Bimbisara\0", 7.43},
        {3, 88, "Chathur\0", 8.87},
        {4, 68, "Darshana\0", 6.823},
        {5, 78, "Eshwar\0", 7.85}};

    size_t size = sizeof(s) / sizeof(s[0]);
    //int size = 5;
    printf("\nDisplaying Information:\n\n");

    // displaying information
    printStudents(s, size);
    return 0;
}

void printStudents(struct student *s, int size)
{
    int i;
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
}