#include<stdio.h>
int main()
struct stud{
    char nm[26];
    int roll;
    float pcnt;
};
{ int i;
struct stud s1[3];
    for( i=0;i<3;i++)
       { printf("Enter name : ");
        scanf("%s",s1[i].nm);
    printf("Enter roll no : ");
    scanf("%d",&s1[i].roll);
    printf("Enter Percentage : ");
    scanf("%f",&s1[i].pcnt);}
        printf("\t STUDENTS INFORMATION \n");
        printf("Name\tRoll Number\tPercentage\n");
         i=0;
        while(i<3){
            printf("%s\t\t%d\t  %.1f\n",s1[i].nm,s1[i].roll,s1[i].pcnt);
         i++ ;
        }
    return 0;
}