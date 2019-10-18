// Dealing with array of structure
#include <stdio.h>
struct stu
{
    char name[20];
    int roll;
    float marks;
};
void main()
{
    struct stu s[5];
    for (int i = 0; i < 5; i++)
    {
    printf("\n\n");
    printf("ENTER STUDENT %d NAME : ", i+1);
    fflush(stdin);
    gets(s[i].name);
    printf("ENTER STUDENT %d ROLL NUMBER : ", i+1);
    scanf("%d", &s[i].roll);
    printf("ENTER STUDENT %d MARKS : ", i+1);
    scanf("%f", &s[i].marks);
    printf("\n");
    printf("%s  %d  %f", s[i].name, s[i].roll, s[i].marks);
    printf("\n\n");
    }
}
