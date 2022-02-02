#include<stdio.h>//
#include<stdlib.h>

struct College
{
    char Code[3];
    char Name[50];
    int Year;
    int NoCourses;
};

struct Courses
{
    char CName[30];
    int Duration;
    int NoStudents;
};

int main()
{
    struct College College1;
    char temp;
    
    system("cls");

    printf("Enter College Details Below :-\n");

    printf("\nEnter College Code :");
    scanf("%s",College1.Code);

    printf("Enter College Name :");
    scanf("%c",&temp);
    scanf("%[^\n]",College1.Name);

    printf("Enter Year of Establishment :");
    scanf("%d",&College1.Year);

    printf("Enter Number of Courses :");
    scanf("%d",&College1.NoCourses);

    struct Courses CCourses[College1.NoCourses];

    system("cls");

    printf("Please Enter Details of courses below :-\n");

    for(int x=0;x<College1.NoCourses;x++)
    {
        printf("\nCourse %d :-",x+1);
        printf("\nPlease Enter Course name :");
        scanf("%c",&temp);
        scanf("%[^\n]",CCourses[x].CName);

        printf("Please Enter Course Duration :");
        scanf("%d",&CCourses[x].Duration);

        printf("Please Enter number of enrolled students :");
        scanf("%d",&CCourses[x].NoStudents);

        printf("\n\n");
    }

    system("cls");

    printf("Detail of College Entered :-");

    printf("\nCollege Code : %s",College1.Code);
    printf("\nCollege Name :%s",College1.Name);
    printf("\nYear of Establishment :%d",College1.Year);
    printf("\nNumber of courses offered :%d",College1.NoCourses);

    printf("\n\nCourses Offered :-");
    for(int y=0;y<College1.NoCourses;y++)
    {
        printf("\n\nCourse %d :-",y+1);
        printf("\n\nCourse Name :%s",CCourses[y].CName);
        printf("\nCourse Duration (In Months):%d",CCourses[y].Duration);
        printf("\nNo. of students :%d",CCourses[y].NoStudents);
        printf("\n\n");
    }

    return 0;
}
