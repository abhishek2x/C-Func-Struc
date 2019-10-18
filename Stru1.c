#include <stdio.h>
// Dealing with structure
struct stu
{
    char name[20];
    int roll;
    float marks;
};
main()
{
    struct stu s;
    printf("ENTER NAME : ");
    gets(s.name);
    fflush(stdin);
    printf("ENTER ROLL NUMBER : ");
    scanf("%d", &s.roll);
    printf("ENTER MARKS : ");
    scanf("%f", &s.marks);

    printf("%s  %d  %f", s.name, s.roll, s.marks);
}
