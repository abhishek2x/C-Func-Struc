// Dealing with nested structure
#include <stdio.h>
struct stu
{
    struct name
    {
        char fname[20];
        char lname[20];
        char mname[20];
    };struct name n;
    int roll;
    float marks;
};
main()
{
    struct stu s[3];
    for (int i = 0; i < 3; i++)
    {
    printf("\n\n");
    printf("ENTER STUDENT-%d FIRST NAME : ", i+1);
    fflush(stdin);
    gets(s[i].n.fname);
    
    printf("ENTER STUDENT-%d MIDDLE NAME : ", i+1);
    fflush(stdin);
    gets(s[i].n.mname);
    
    printf("ENTER STUDENT-%d LAST NAME : ", i+1);
    fflush(stdin);
    gets(s[i].n.lname);

    printf("ENTER STUDENT %d ROLL NUMBER : ", i+1);
    scanf("%d", &s[i].roll);

    printf("ENTER STUDENT %d MARKS : ", i+1);
    scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < 3; i++)
    {
    printf("%s\t%s\t%s\t\t%d\t\t%f",s[i].n.fname, s[i].n.mname, s[i].n.lname, s[i].roll, s[i].marks);
    printf("\n\n");
    }
}
