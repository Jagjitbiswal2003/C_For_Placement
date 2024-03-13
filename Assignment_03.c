// WAP that check the grade of students using switch case.but switch case approach is not   appropriate for it.

#include <stdio.h>

int main()
{
    int mark;
    printf("Enter the Mark of Student:\n");
    scanf("%d", &mark);
    switch (mark)
    {
    case 100:
        printf("The student get O grade with 100 marks!");
        break;
    case 90:
        printf("The student get O grade!");
        break;
    case 80:
        printf("The student get E grade!");
        break;
    case 70:
        printf("The student get A grade!");
        break;
    case 60:
        printf("The student get B grade!");
        break;
    case 50:
        printf("The student get C grade!");
        break;
    default:
        printf("The student is failed!");
        break;
    }

    return 0;
}